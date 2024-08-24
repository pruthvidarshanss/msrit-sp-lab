# `System Programming Laboratory`

## `Steps`

* Install GCC version
```sh
sudo apt update && sudo apt install gcc-12 g++-12 -y
```

* Verify installation
```sh
which gcc-12
gcc-12 --version
```

* Create two files
    1. C file containing program (say `program.c`)
    2. Create a `Makefile` which instructs the build system to compile the module against the current kernel’s build directory.

* Rebuild the kernel module using command, which will create additional compiled modules file
```sh
make
```

* Load the module
```sh
sudo insmod <program>.ko
```

* Check if module is running
```sh
lsmod | grep <program>
```

* Check kernel messages
```sh
sudo dmesg | tail 
```

* Unload the module
```sh
sudo rmmod <program>
```