# CASE Environment Setup

This folder contains scripts and Vagrantfile to setup environment for CASE tools.

Once setup (instructions below), all CASE tools/artifacts are installed in ``~/CASE`` 
(can be overriden by specifying ``BASE_DIR`` env var; pease see [case-setup.sh](case-setup.sh)); 
to run FMIDE:

```bash
fmide&
```


## Setting Up A Linux Machine

### Requirement

* Debian [10 (buster)](https://cdimage.debian.org/debian-cd/current-live/amd64/bt-hybrid/)

### Steps

Install Debian 10 and run the following in a terminal:

```bash
bash case-setup.sh
```


## Setting Up A VirtualBox VM Using Vagrant

### Requirements

* VirtualBox [6.1.*x*](https://www.virtualbox.org/)

* [Vagrant](https://www.vagrantup.com/) 2.2.7+ 

### Steps

* Windows

  ```bash
  setup.bat
  ```

* macOS/Linux

  ```bash
  bash setup.sh
  ```

Once Vagrant finished setting up the VM, log in using ``vagrant`` for both the username and the password and then run:

```bash
startx
```

Then, optionally, logout/shutdown the VM and take a VM snapshot (to allow for rolling back later) and re-start it from VirtualBox.

