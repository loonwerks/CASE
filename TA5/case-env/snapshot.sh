#!/bin/bash

set -exuo pipefail

: "${SNAPSHOT_DATE:=20200701}"

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
