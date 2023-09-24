# Configuration and Building Kernel

The kernel is the third element of embedded Linux. It's the component that is responsible for managing resources and interfacing with hardware.

## What Does Kernel Do?

The Linux kernel can be combined with a GNU user space to create a full Linux distribution that runs on desktop and servers, which is sometimes called GNU/Linux. It can be combined with an Android user space to create the well-known mobile operating system, or it can be combined with a small BusyBox-based user space to create a compact embedded system.

Applications running in user space run at a low CPU privilege level. The primary interface between user space and the kernel space is the C-library, which translates user-level functions, such as those defined in POSIX, into kernel system calls. The system call interface uses an architecture-specific method such as a trap or a software interrupt to switch the CPU from low privilege user mode to high privilege kernel mode, which allows access to all memory addresses and CPU registers.

## Choosing Kernel

### Clone Resources

To get started with configuring and building the kernel, you'll first need to clone the necessary resources. Follow these steps:

```bash
# Clone the repository with the desired kernel version (e.g., rpi-6.4.y)
git clone --depth=1 --branch rpi-6.4.y https://github.com/raspberrypi/linux
```

### Configure Kernel

Once you have cloned the kernel repository, navigate to the cloned directory and configure the kernel. In this example, we assume you are configuring it for the Raspberry Pi 4 (bcm2711) platform.

```bash
cd linux
KERNEL=kernel8
make bcm2711_defconfig
```

### Build Kernel

After configuring the kernel, you can proceed to build it. Use the following commands to build the kernel for the specified architecture (arm64) and cross-compile it using the appropriate toolchain (aarch64-rpi3-linux-gnu-).

```bash
make ARCH=arm64 CROSS_COMPILE=aarch64-rpi3-linux-gnu- bcm2711_defconfig
make -j
```

The `-j` flag specifies the number of parallel jobs for the build process, allowing for faster compilation by utilizing multiple CPU cores. Adjust the number according to your system's capabilities.

That's it! You've successfully configured and built the Linux kernel. You can now use the generated kernel image and device tree files as needed for your embedded Linux project.