# Linux Service Management Exercises

This repository contains exercises for basic and custom service management using systemd on a Linux system.

## Exercise 1: Basic Service Management

### Step 1: Create a Simple Service Unit File

1. Copy an existing service unit file to create `myservice.service`:
    ```bash
    sudo cp man-db.service myservice.service
    ```

2. Gain root access:
    ```bash
    sudo -i
    ```

### Step 2: Configure the Service

1. Edit `myservice.service` to run a basic shell command (e.g., printing a message to the terminal):
    ```bash
    vim myservice.service
    ```

### Step 3: Start the Service

1. Reload systemd units and recreate dependencies files:
    ```bash
    sudo systemctl daemon-reload
    ```

2. Start the service:
    ```bash
    sudo systemctl start myservice.service
    ```

3. Check the service status at each stage:
    ```bash
    sudo systemctl status myservice.service
    ```

### Step 4: Stop and Restart the Service

1. Restart the service:
    ```bash
    sudo systemctl restart myservice.service
    ```

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

### Step 2: Configure the Service

1. Edit `service_script.sh` with the script or application you want to run:
    ```bash
    vim service_script.sh
    ```

### Step 3: Define Dependencies and Enable the Service

1. Define dependencies (if any) for your service in `myservice.service`.

2. Reload systemd units and recreate dependencies files:
    ```bash
    sudo systemctl daemon-reload
    ```

3. Enable the service to start on boot:
    ```bash
    sudo systemctl enable myapp.service
    ```

### Step 4: Start, Stop, and Restart the Service

1. Start the service:
    ```bash
    sudo systemctl start myservice.service
    ```

2. Check the service status at each stage:
    ```bash
    sudo systemctl status myservice.service
    ```

3. Restart the service:
    ```bash
    sudo systemctl restart myservice.service
    ```

For Exercise 2, I uploaded all necessary files along with this repository.

