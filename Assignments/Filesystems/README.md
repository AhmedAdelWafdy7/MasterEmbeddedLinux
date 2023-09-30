# filesystems  README.md

This README file provides step-by-step instructions on how to perform the assigned tasks related to creating and managing partitions on an USB Flash. 
### Task 1: Creating Partitions

1. **Initial Setup:**
   - Begin by ensuring the SD-CARD is unallocated and empty. You can use tools like `gparted` to achieve this.

2. **Creating Partitions:**
   - Use the `fdisk` command to create two partitions on the SD-CARD:
     ```
     sudo fdisk /dev/sdc
     ```
   - Once created, the partitions should be available as `/dev/sdc1` and `/dev/sdc2`.

### Task 2: Creating Filesystems and Mounting Partitions

1. **Creating Filesystems:**
   - Create an ext4 filesystem on the first partition:
     ```
     sudo mkfs.ext4 /dev/sdc1
     ```
   - Create an ext2 filesystem on the second partition:
     ```
     sudo mkfs.ext2 /dev/sdc2
     ```

2. **Mounting Partitions:**
   - Mount the ext4 partition to `/mnt`:
     ```
     sudo mount -t ext4 /dev/sdc1 /mnt
     ```
   - Mount the ext2 partition to `/mnt`:
     ```
     sudo mount -t ext2 /dev/sdc2 /mnt
     ```
   
3. **Verifying Mounting:**
   - Use `lsblk` or `df -hT` commands to verify that the partitions are mounted correctly.

### Task 3: Adding Files and Rebooting

1. **Adding Files:**
   - Create sample files inside each partition, for instance:
     ```
     sudo touch /mnt/file1.txt
     ```
   
2. **Rebooting System:**
   - Reboot your machine to observe the state after rebooting.

3. **Verifying Mount Points After Reboot:**
   - After the reboot, check if the mounting points still exist. They should not be present anymore.

### Task 4: Making ext4 Partition Persistent

1. **Editing /etc/fstab:**
   - Add an entry to the `/etc/fstab` file to make the ext4 partition persistent:
     ```
     sudo vim /etc/fstab
     ```
     Add the following line:
     ```
     /dev/sdc1 /mnt ext4 defaults 0 0
     ```
   - Save and exit the editor.

2. **Rebooting System Again:**
   - Reboot your system once more to apply the changes made in the `/etc/fstab` file.

### Task 5: Verifying Persistence

1. **Checking if ext4 Partition is Mounted:**
   - After the system reboot, use the `df -hT` command to check if the ext4 partition is mounted persistently. 

---
