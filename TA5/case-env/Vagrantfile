# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure("2") do |config|

  required_plugins = %w( vagrant-vbguest vagrant-disksize )
  _retry = false
  required_plugins.each do |plugin|
    unless Vagrant.has_plugin? plugin
      system "vagrant plugin install #{plugin}"
      _retry=true
    end
  end

  if (_retry)
    exec "vagrant " + ARGV.join(' ')
  end

  config.vm.box = "debian/buster64"
  config.vm.provider :virtualbox do |vb|
    vb.cpus = 4
    vb.memory = 8092
    vb.gui = true
    vb.linked_clone = true
    vb.customize ["modifyvm", :id, "--vram", "64"]
    vb.customize ["modifyvm", :id, "--clipboard-mode", "bidirectional"]
    vb.customize ["modifyvm", :id, "--draganddrop", "bidirectional"]
    vb.customize ["modifyvm", :id, "--graphicscontroller", "vmsvga"]
  end
  config.disksize.size = '40GB'

  if ENV['FIRST_RUN'] == 'true'
    config.vbguest.auto_update = false
  end

  config.vm.provision "file", source: "case-setup.sh", destination: "case-setup.sh"

  config.vm.provision "file", source: "addons", destination: "addons"

  config.vm.provision "shell", inline: <<-SHELL
    export DEBIAN_FRONTEND=noninteractive
    apt-get update
    echo "Installing xfce-desktop ..."
    tasksel install xfce-desktop
  SHELL

  config.vm.provision "shell", privileged: false, inline: <<-SHELL
    bash case-setup.sh
    rm -R case-setup.sh addons
  SHELL
end
