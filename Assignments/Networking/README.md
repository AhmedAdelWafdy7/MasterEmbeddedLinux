# Networking Assignment Readme

This readme provides a step-by-step guide for completing the networking assignment tasks on VMware virtual machines. The tasks include getting IP addresses for each VM, checking connectivity through ICMP packets using the ping command, monitoring ICMP packets using Wireshark, and changing the status of the Ethernet card on PC2.

## Getting IP Addresses for VMware Virtual Machines

To find the IP addresses for your VMware virtual machines, run the following command in each VM:

```bash
ip addr
```

- VMWare 1 IP: 192.168.1.6
- VMWare 2 IP: 192.168.1.3

## Checking Connectivity using Ping Command

To check connectivity between the virtual machines, send ICMP packets to the destination IP address and see if you get a reply:

```bash
ping 192.168.1.6
```

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

1. **Strace Ping Command:**
   ```bash
   strace -e trace=network ping 8.8.8.8
   ```
