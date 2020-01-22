# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|

  if ENV['FIRST_RUN'] == 'true'
    config.vbguest.auto_update = false
  end

  config.vm.provider :virtualbox do |vb|
    vb.cpus = 4
    vb.memory = 8092
    vb.gui = true
    vb.linked_clone = true
    vb.customize ["modifyvm", :id, "--vram", "64"]
    vb.customize ["modifyvm", :id, "--clipboard", "bidirectional"]
    vb.customize ["modifyvm", :id, "--draganddrop", "bidirectional"]
  end

  config.vm.box = "debian/buster64"

  config.vm.provision "shell", inline: <<-SHELL
    export DEBIAN_FRONTEND=noninteractive
    apt-get update
    echo "Installing xfce-desktop ..."
    tasksel install xfce-desktop
  SHELL

  config.vm.provision "file", source: "case-setup.sh", destination: "case-setup.sh"

  config.vm.provision "shell", privileged: false, inline: <<-SHELL
    bash case-setup.sh
    rm case-setup.sh
  SHELL
end
