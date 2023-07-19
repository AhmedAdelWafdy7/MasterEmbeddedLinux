# Checking CPU Cores and Managing Processes

This repository provides examples of how to check the number of CPU cores and manage processes using various commands.

## 1. Checking CPU Cores using `top` Command

To check how many CPU cores you have, you can use the `top` command. Follow these steps:

1. Open the terminal.
2. Type `top` and press Enter.
3. Once `top` is running, press the `1` key to show a detailed view of each CPU core.

### Output Screenshot:
![CPU Cores](cpu_cores.![Cpu_cores](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/17f1e8c3-a34c-4865-9957-0a069742d09f)
png)

## 2. Creating Processes in Background

In this example, we will create a number of processes to stress the system. We will use the `dd` command to create processes in the background.

### Command Used:
```bash
sudo dd if=/dev/zero of=/dev/null &
```

T![create2process](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/4788ad0a-6565-4144-945f-7eb43f5cdddb)
his command creates a process that reads from `/dev/zero` and writes to `/dev/null`, effectively discarding the output.

## 3. Changing Priority for Processes

To change the priority of processes, we can use the `renice` command. The priority values range from -20 (highest priority) to 19 (lowest priority). Higher negative values indicate higher priority, while positive values indicate lower priority.

### Command Used:
```bash
sudo renice -n -20 -p <process_id>
sudo renice -n -10 -p <process_id>
sudo renice -n 0 -p <process_id>
sudo renice -n 19 -p <process_id>
```

Replace `<process_id>` with the process IDs obtained from the `top` command or any other process management tool.
![change_priority](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/147059ec-244b-434f-9f30-ffb4fb5132ca)

## 4. Killing Processes using `killall` Command

To terminate processes, we can use the `killall` command followed by the process name.

### Command Used:
```bash
killall -g top
```
![Kill_processes](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/2f9122a7-3b37-4a5e-aef1-4a335e34f2ac)

This command will terminate all processes with the name "top".

