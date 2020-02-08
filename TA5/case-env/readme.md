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

* [Vagrant](https://www.vagrantup.com/) 2.2.7 or above

### Notes

By default, the VM is configured with 4 cores, 8GB RAM, 60GB disk size, and 64MB video memory.
These settings can be changed in [Vagrantfile](Vagrantfile) or in the built VM after provisioning.

### Setup

* Windows

  ```bash
  setup.bat
  ```

* macOS/Linux

  ```bash
  bash setup.sh
  ```

Once Vagrant finished setting up the VM, log in using ``vagrant`` for both the username and the password.

Then, optionally, logout/shutdown the VM and take a VM snapshot (to allow for rolling back later) and re-start it from VirtualBox.


## Post Setup

* To update FMIDE to the latest nightly release, simply (re-)run the following in the VM:

  ```bash
  $SIREUM_HOME/bin/install/fmide.cmd
  ```

* To update Sireum to the latest version:

  ```bash
  cd $SIREUM_HOME
  git checkout master
  git submodule update --init --recursive
  bin\build.cmd
  ```

* To install the IntelliJ-based [Sireum IVE](https://github.com/sireum/kekinian)
  (for HAMR Slang component development, etc.):

  ```bash
  $SIREUM_HOME/bin/build.cmd setup
  ```

  Then, to launch it:

  ```bash
  $SIREUM_HOME/bin/linux/idea/bin/IVE.sh&
  ```

* To install [CLion](https://www.jetbrains.com/clion/) C/C++ IDE 
  (for browsing HAMR generated C code, etc.; license required/free 30-day evaluation):

  ```bash
  $SIREUM_HOME/bin/install/clion.cmd
  ```
