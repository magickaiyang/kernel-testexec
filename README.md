tfork
------------
tfork is a fast implementation of the fork system call specifically designed for applications with a large memory footprint and a requirement for low fork latency. It is especially suitable for applications that:
* establishes a large virtual memory space, and
* creates process frequently, and
* only writes to a small portion of the memory after process creation.

### Usage
The complete modified Linux kernel source code is provided. The code is based on Linux kernel v5.6.19. A sample configuration file that we used for testing is also included, but you can change it to suit your needs. 

Compile the kernel as you normally would, and boot your system with the produced kernel image. In your applications, replace fork() with syscall(439) to invoke tfork.

For added convenience, a patch file ``changes.patch`` is included that can be potentially used to patch other versions of Linux kernel.
