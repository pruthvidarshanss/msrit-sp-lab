# `System Programming Laboratory`

## `Programs`

> Lab 1

Configure the Linux kernel according to specific hardware and software requirements.

> Lab 2

Demonstrate how to avoid the "zombie" state by properly waiting for child processes to exit in a parent process.

> Lab 3

Create and load a basic LKM into the Linux kernel, which prints a message when loaded and unloaded.

> Lab 4

Create and load an LKM that accepts parameters into the Linux kernel, and observe how parameter values affect the LKM's behavior.

> Lab 5

Create an LKM that generates a /proc file containing the PIDs and names of all running processes.

> Lab 6

Create an LKM that changes the priority of a specific process identified by its PID.

> Lab 7

Create an LKM that that will display a list of only those tasks which are 'kernel threads"? (Le., task mm=0). How many 'kernel threads' on your list?

> Lab 8

Create an LKM that prints information about a specific process, including its PID, resident set size (RSS), virtual memory size (VSZ), and command name.

> Lab 9

Create an LKM using kmalloc for allocating memory for the struct process_info objects that initializes, tracks, and prints information about running processes.

> Lab 10

Create an LKM that allocates memory using both kmalloc and vmalloc, and then compare their characteristics.

> Lab 11

Load the LKM into the Linux kernel, observe two threads running concurrently and using a mutex for synchronization.

> Lab 12

Build a kernel from source-customized kernel, kemel image, customize GRUB boot loader


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