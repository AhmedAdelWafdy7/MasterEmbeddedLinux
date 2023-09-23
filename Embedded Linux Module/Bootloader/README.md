# Bootloaders

A bootloader is a critical component in the world of embedded Linux. It plays a pivotal role in starting the system and loading the operating system kernel. The bootloader serves as a bridge, passing control from itself to the kernel using a data structure known as a device tree.

## What Does a Bootloader Do?

The primary responsibility of a bootloader is to initialize the system to a basic operational state and load the kernel. When the system is powered on or reset, it is in a minimal state where resources like the DRAM controller and main memory are inaccessible. Initially, only a single CPU core, some on-chip static memory, and the boot ROM are operational.

The system bootstrapping process consists of several phases of code execution, each gradually bringing more of the system into operation. The ultimate objective of the bootloader is to load the kernel into RAM and create an execution environment for it.

To achieve this, the bootloader must accomplish two critical tasks. First, it has to pass a pointer to a data structure containing information about the hardware configuration. Second, it must provide a pointer to the kernel command line.

## The Boot Sequence

### Phase 1: ROM Code

The code that executes immediately after a reset or power-on is stored on-chip within the System-on-Chip (SoC). This ROM code is loaded onto the chip during the manufacturing process.

Most embedded SoCs are equipped with a small amount of SRAM on-chip. The ROM code is responsible for loading a small chunk of code from pre-programmed locations into this SRAM.

In cases where the SRAM is insufficient to load a full bootloader like U-Boot, an intermediate loader called the Secondary Program Loader (SPL) comes into play. At the end of the ROM code phase, the SPL is present in SRAM, and the ROM code transfers control to the beginning of the SPL.

### Phase 2: Secondary Program Loader (SPL)

The functionality of the SPL is constrained by the size of the SRAM. It can read a program from a list of storage devices. As the SPL executes within SRAM, it loads the Tertiary Program Loader (TPL) into DRAM. By the end of the second phase, the TPL resides in DRAM, and the SPL can initiate a jump to that memory area.

### Phase 3: Tertiary Program Loader (TPL)

At this stage, we have a full-fledged bootloader, such as U-Boot, in operation. The code in SPL jumps from SRAM to TPL in DRAM. As the TPL executes, it loads the kernel into DRAM. In the third phase, a kernel is in memory, ready to be started.

Embedded bootloaders typically relinquish control to the kernel once it is running. However, before that occurs, the TPL must gracefully hand off control of the boot process to the kernel.

## Device Trees Overview

A device tree is a flexible means of defining the hardware components of a computer system. It is a static data structure and not executable code. Usually, the device tree is loaded by the bootloader and passed to the kernel.

The device tree represents a computer system as a collection of components organized hierarchically, like a tree. The device tree begins with a root node.

## U-Boot

U-Boot, short for Universal Bootloader, is an open-source bootloader originally designed for embedded PowerPC boards. Over time, it has been ported to ARM-based boards and later to other architectures, making it a versatile choice for a wide range of embedded systems.

## Building U-Boot

To build U-Boot, follow these steps:

1. Clone the U-Boot repository:
   ```
   git clone git://git.denx.de/u-boot.git
   cd u-boot
   ```

2. Build U-Boot for Raspberry Pi 3 (RPI3):
   ```
   make rpi_3_defconfig
   make CROSS_COMPILE=aarch64-rpi3-linux-gnu-
   ```

## Installing U-Boot

To install U-Boot on a QEMU emulator for testing purposes, you can use the following command:

```bash
qemu-system-aarch64 \
    -M raspi3b \
    -cpu cortex-a72 \
    -append "rw earlyprintk loglevel=8 console=ttyAMA0,115200" \
    -kernel u-boot.bin \
    -m 1G -smp 4 \
    -serial stdio \
    -usb -device usb-mouse -device usb-kbd \
    -device usb-net,netdev=net0 \
    -netdev user,id=net0,hostfwd=tcp::5555-:22
```

## Using U-Boot

(Under construction)

[//]: # (You can add usage instructions for U-Boot here.)
