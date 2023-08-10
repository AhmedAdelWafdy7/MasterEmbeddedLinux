# Linux Service Management Exercises

This repository contains exercises for basic and custom service management using systemd on a Linux system.

## Exercise 1: Basic Service Management

### Step 1: Create a Simple Service Unit File

1. Copy an existing service unit file to create `myservice.service`:
    ```bash
    sudo cp man-db.service myservice.service
    ```
![1](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/f2fcbf93-65e0-4c5d-b253-87321741b4e2)

2. Gain root access:
    ```bash
    sudo -i
    ```
![2](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/573bc3b2-7064-45d4-a7b3-c8b000156366)

### Step 2: Configure the Service

1. Edit `myservice.service` to run a basic shell command (e.g., printing a message to the terminal):
    ```bash
    vim myservice.service
    ```
![3](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/3715a1db-d612-4d31-8b40-68212e975341)

### Step 3: Start the Service

1. Reload systemd units and recreate dependencies files:
    ```bash
    sudo systemctl daemon-reload
    ```

2. Start the service:
    ```bash
    sudo systemctl start myservice.service
    ```
![4](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/4321e94c-869a-4829-9067-d77c54d7ca46)

3. Check the service status at each stage:
    ```bash
    sudo systemctl status myservice.service
    ```
    ![5](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/a66dace5-163e-41bb-b7e9-e65973dec59e)

![6](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/453b8f59-5b53-4481-a3d4-4037719fa75d)

### Step 4: Stop and Restart the Service

1. Restart the service:
    ```bash
    sudo systemctl restart myservice.service
    ```
    ![7](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/a6931ac1-dec2-40ac-9e33-9715ff6232f4)


## Exercise 2: Custom Service Configuration

### Step 1: Create a New Service Unit File

1. Gain root access:
    ```bash
    sudo -i
    ```

2. Create a directory for the service script:
    ```bash
    mkdir /root/testing_systemd/ && cd /root/testing_systemd
    ```

3. Create and make the script executable:
    ```bash
    touch service_script.sh
    chmod +x service_script.sh
    ```
![1](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/57a90e7a-91ef-410d-a671-ff7d238c4ce2)

### Step 2: Configure the Service

1. Edit `service_script.sh` with the script or application you want to run:
    ```bash
    vim service_script.sh
    ```
![2](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/7f96c288-9079-441d-9c6c-2c92a7621caf)

### Step 3: Define Dependencies and Enable the Service

1. Define dependencies (if any) for your service in `myservice.service`.
![3](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/073e9702-737c-46b5-b46b-7ab590751f29)

2. Reload systemd units and recreate dependencies files:
    ```bash
    sudo systemctl daemon-reload
    ```

3. Enable the service to start on boot:
    ```bash
    sudo systemctl enable myapp.service
    ```
![4](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/dae4bb69-94b5-4e32-8f30-4ac29d48d262)

### Step 4: Start, Stop, and Restart the Service

1. Start the service:
    ```bash
    sudo systemctl start myservice.service
    ```
![5](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/c46ec3bf-587a-40b1-a328-cc8141279fc4)

2. Check the service status at each stage:
    ```bash
    sudo systemctl status myservice.service
    ```

3. Restart the service:
    ```bash
    sudo systemctl restart myservice.service
    ```
![6](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/d915c9ad-07db-4edc-bd3f-431629d227ea)

For Exercise 2, I uploaded all necessary files along with this repository.

