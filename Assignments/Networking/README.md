# Networking Assignment Readme

This readme provides a step-by-step guide for completing the networking assignment tasks on VMware virtual machines. The tasks include getting IP addresses for each VM, checking connectivity through ICMP packets using the ping command, monitoring ICMP packets using Wireshark, and changing the status of the Ethernet card on PC2.

## Getting IP Addresses for VMware Virtual Machines

To find the IP addresses for your VMware virtual machines, run the following command in each VM:

```bash
ip addr
```
   ![Screenshot 2023-09-30 073208](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/c3f2b817-400c-4e62-a548-2826bc1205b8)

- VMWare 1 IP: 192.168.1.6
- VMWare 2 IP: 192.168.1.3

## Checking Connectivity using Ping Command

To check connectivity between the virtual machines, send ICMP packets to the destination IP address and see if you get a reply:

```bash
ping 192.168.1.6
```
   ![Screenshot 2023-09-30 073248](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/bf5222ce-7556-4670-b33f-030896fb48b1)

## Monitoring ICMP Packets using Wireshark

To monitor ICMP packets using Wireshark, use the following display filter to capture only ICMP traffic on the network:

```bash
icmp and ip.src == 192.168.1.6 and ip.dst == 192.168.1.3
```

## Changing Ethernet Card Status on PC2

To change the status of the Ethernet card on PC2 to down, use the following command:

```bash
sudo ifconfig enp0s3 down
```

## Video Tutorial

For a visual demonstration of these operations, refer to the following steps in the video:


   https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/ce123cba-73af-40d5-ab17-19c2e55eef27


1. **Strace Ping Command:**
   ```bash
   strace -e trace=network ping 8.8.8.8
   ```
   ![Screenshot 2023-09-30 081234](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/f6a86aa6-fb80-44f0-8230-ae6ef952ec9f)
