#!/bin/bash

set -exuo pipefail

: "${SNAPSHOT_DATE:=20200717T204551Z}"

sudo tee /etc/apt/sources.list << EOF
deb http://snapshot.debian.org/archive/debian/$SNAPSHOT_DATE buster main
deb http://snapshot.debian.org/archive/debian-security/$SNAPSHOT_DATE buster/updates main
deb http://snapshot.debian.org/archive/debian/$SNAPSHOT_DATE buster-updates main
EOF

for release in stretch bullseye; do
  grep "buster main" /etc/apt/sources.list | sed "s/buster/$release/g"  | sudo tee -a "/etc/apt/sources.list"
done

sudo sed -i  's/deb http:\/\/snapshot/deb \[check-valid-until=no\] http:\/\/snapshot/g' /etc/apt/sources.list

sudo apt-get update -q

sudo tee -a /etc/apt/apt.conf.d/70debconf << EOF
APT::Default-Release "buster";
EOF

sudo tee -a /etc/apt/apt.conf.d/80retries << EOF
APT::Acquire::Retries "3";
EOF

echo "force-unsafe-io" | sudo tee /etc/dpkg/dpkg.cfg.d/02apt-speedup > /dev/null
echo "Acquire::http {No-Cache=True;};" | sudo tee /etc/apt/apt.conf.d/no-cache > /dev/null

sudo apt-get update -q

sudo apt-get install -y --no-install-recommends -t bullseye apt

current_apt_ver=$(apt-cache policy apt | grep "Installed" | xargs | cut -d' ' -f2)

if printf '2.1.9 needed\n%s have\n' "$current_apt_ver" | sort -rV | head -n 1 | grep -q needed; then
  for pkg in "libapt-pkg6.0_2.1.10_amd64.deb" "apt_2.1.10_amd64.deb" ; do
    wget "http://snapshot.debian.org/archive/debian/20200811T150316Z/pool/main/a/apt/$pkg"
    sudo apt install "./$pkg" -t bullseye -y
    rm "./$pkg"  # clean-up package
  done
fi
