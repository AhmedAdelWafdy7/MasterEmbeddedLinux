# filesystems  README.md

This README file provides step-by-step instructions on how to perform the assigned tasks related to creating and managing partitions on an USB Flash. 
### Task 1: Creating Partitions

1. **Initial Setup:**
   - Begin by ensuring the SD-CARD is unallocated and empty. You can use tools like `gparted` to achieve this.
     ![Screenshot from 2023-09-30 01-49-57](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/f330e6c2-5f16-42fe-9f5b-73f2744e1b31)
     
    ![Screenshot from 2023-09-30 02-01-48](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/58108395-9a04-495d-be86-92be20dd3e55)

3. **Creating Partitions:**
   - Use the `fdisk` command to create two partitions on the SD-CARD:
     ```
     sudo fdisk /dev/sdc
     ```
     ![Screenshot from 2023-09-30 02-23-04](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/a6341729-a688-4e62-94d2-5eda705107cc)
   - Once created, the partitions should be available as `/dev/sdc1` and `/dev/sdc2`.

   ![Screenshot from 2023-09-30 02-23-24](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/364c538e-31a4-41dc-906c-2fb93946313a)
   
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
   ![Screenshot from 2023-09-30 02-41-45](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/2ed197c9-c593-430a-8987-83bd6715f3b3)


2. **Mounting Partitions:**
   - Mount the ext4 partition to `/mnt`:
     ```
     sudo mount -t ext4 /dev/sdc1 /mnt
     ```
   - Mount the ext2 partition to `/mnt`:
     ```
     sudo mount -t ext2 /dev/sdc2 /mnt
     ```
   ![Screenshot from 2023-09-30 02-52-48](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/79fc965d-9791-4aca-b865-ae1e81134c83)

3. **Verifying Mounting:**
   - Use `lsblk` or `df -hT` commands to verify that the partitions are mounted correctly.

   ![Screenshot from 2023-09-30 02-54-01](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/268527c1-ae95-4311-ad02-f5ddc0c11d44)

### Task 3: Adding Files and Rebooting

1. **Adding Files:**
   - Create sample files inside each partition, for instance:
     ```
     sudo touch /mnt/file1.txt
     ```
   ![Screenshot from 2023-09-30 02-59-36](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/7ebce623-cc3d-4920-ad55-9fc4656e0714)

2. **Rebooting System:**
   - Reboot your machine to observe the state after rebooting.

3. **Verifying Mount Points After Reboot:**
   - After the reboot, check if the mounting points still exist. They should not be present anymore.
   ![Screenshot from 2023-09-30 03-04-42](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/373b09e8-cff3-471c-a15c-e5f2f44be3a8)

### Task 4: Making ext4 Partition Persistent

1. **Editing /etc/fstab:**
   - Add an entry to the `/etc/fstab` file to make the ext4 partition persistent:
     ```
     sudo vim /etc/fstab
     ```
     ![Screenshot from 2023-09-30 03-08-18](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/fbfcc281-fd4e-417d-b6b8-ee393910b2c9)

     Add the following line:
     ```
     /dev/sdc1 /mnt ext4 defaults 0 0
     ```
   - Save and exit the editor.
      ![Screenshot from 2023-09-30 03-14-16](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/9313b0d6-c0c1-41bc-af72-8e3816f03be4)

2. **Rebooting System Again:**
   - Reboot your system once more to apply the changes made in the `/etc/fstab` file.

### Task 5: Verifying Persistence

1. **Checking if ext4 Partition is Mounted:**
   - After the system reboot, use the `df -hT` command to check if the ext4 partition is mounted persistently. 
      ![Screenshot from 2023-09-30 03-16-57](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/2e5320ca-492d-4443-9203-9aaa094c6045)

---
