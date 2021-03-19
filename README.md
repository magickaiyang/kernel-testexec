ON-DEMAND-FORK
------------
ON-DEMAND-FORK (ODF) is a fast implementation of the fork system call specifically designed for applications with large memory footprints and a requirement for low fork latency.

### Build
We provide the complete source code of the ODF implementation, which is based on Linux kernel v5.6.19. A sample configuration file that we used for testing is also included, but you can change it to suit your needs. 

Compile the kernel as you normally would, then install the kernel image and modules. Boot your system using this version of the kernel (refer to the documentation of your bootloader).

For added convenience, here is a snippet of commands to compile the kernel and install it on Debian-like systems:
```
make -j12 bindeb-pkg
cd ..
sudo dpkg -i linux-image-5.6.19*
```

### Usage
In your applications, replace `fork()` with `syscall(439)` to invoke ODF.
