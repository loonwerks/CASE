# CASE Environment Setup

This folder contains scripts and Vagrantfile to setup environment for CASE tools, either:

* [in a dedicated Linux machine](#setting-up-a-dedicated-linux-machine), or

* [by automatically provisioning a Linux VM using VirtualBox and Vagrant](#setting-up-a-virtualbox-vm-using-vagrant).

Once setup (instructions below), all CASE tools/artifacts are installed in ``~/CASE`` 
(can be overriden by specifying ``BASE_DIR`` env var; pease see [case-setup.sh](case-setup.sh)).
Additional tools and scripts are installed in ``~/bin``.  To run FMIDE:

```bash
fmide&
```

The above will launch ``fmide`` installed in ``~/CASE/Sireum/bin/linux/fmide``.


## Setting Up A Dedicated Linux Machine

### Requirement

* Debian [10 (buster)](https://cdimage.debian.org/debian-cd/current-live/amd64/bt-hybrid/)

### Steps

Run the following (and subsequent commands) in your local repo's case-env directory:

```bash
bash case-setup.sh
```

See [Post Setup](#post-setup) below for additional instructions.


## Setting Up A VirtualBox VM Using Vagrant

### Requirements

* [VirtualBox](https://www.virtualbox.org/) **6.1.2** or above

* [Vagrant](https://www.vagrantup.com/) **2.2.7** or above

### Notes

By default, the VM is configured with 4 cores, 8GB RAM, and 64MB video memory.
These settings can be changed in [Vagrantfile](Vagrantfile) or in the built VM after provisioning.
The VM disk size is derived from the base box [bento/debian-10](https://app.vagrantup.com/bento/boxes/debian-10), which is 64GB.

### Setup

Run the following (and subsequent commands) in your local repo's ``case-env`` directory:

* Windows

  ```bash
  setup.bat
  ```

* macOS/Linux

  ```bash
  bash setup.sh
  ```

Once Vagrant finished setting up the VM, log in using ``vagrant`` for both the username and the password in the Linux VM login GUI.

Then, optionally, logout/shutdown the VM and take a VM snapshot (to allow for rolling back later) and re-start it from VirtualBox.

If there is an error when running the setup script (e.g., internet connection is down during provisioning), destroy the VM before re-launching the setup script.  To destroy the VM:

```bash
vagrant destroy
```

See [Post Setup](#post-setup) below for additional instructions.


## Post Setup

### Updating Installed CASE Tools & Artifacts

* To update FMIDE to the latest nightly release, simply (re-)run the following in the VM:

  ```bash
  $SIREUM_HOME/bin/install/fmide.cmd
  ```

* To update Sireum to the latest version:

  ```bash
  cd $SIREUM_HOME
  git checkout master
  git pull --recurse-submodules
  git submodule update --init --recursive
  bin/build.cmd
  ```

* To update seL4 and friends (cache, etc.):

  ```bash
  bash ~/bin/sel4-cache.sh <SEL4-MANIFEST-COMMIT> # desired version as commit SHA of https://github.com/seL4/sel4test-manifest
  bash ~/bin/camkes-cache.sh <CAMKES_MANIFEST_COMMIT> # desired version as commit SHA of https://github.com/seL4/camkes-manifest
  ```

### Optionals

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

  Then, to launch it:

  ```bash
  $SIREUM_HOME/bin/linux/clion/bin/clion.sh&
  ```

* To install [CompCert](http://compcert.inria.fr/) (including [Coq](https://coq.inria.fr/)):

  ```bash
  bash ~/bin/compcert-install.sh
  ```

  Note that CompCert "can be used for evaluation, research and education purposes, but not for commercial purposes".

  To only install [Coq](https://coq.inria.fr/) (without CompCert):

  ```bash
  bash ~/bin/coq-install.sh
  ```
