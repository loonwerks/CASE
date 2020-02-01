set FIRST_RUN=true
vagrant up --no-provision
vagrant ssh -c 'sudo apt update'
vagrant ssh -c 'sudo DEBIAN_FRONTEND=noninteractive apt upgrade -y'
vagrant ssh -c 'sudo DEBIAN_FRONTEND=noninteractive apt install -y build-essential linux-headers-amd64 linux-image-amd64 python-pip'
vagrant halt
set FIRST_RUN=false
vagrant up
vagrant reload