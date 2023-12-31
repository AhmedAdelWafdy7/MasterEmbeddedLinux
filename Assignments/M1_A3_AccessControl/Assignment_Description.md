```markdown
# Exercise 1: File Permissions and Ownership

In this exercise, we'll explore file permissions and ownership in Linux.

1. To know the owner of the session, you can use the following command:
   ```bash
   whoami
   ```

2. Create a directory called `access_practice`:
   ```bash
   cd ~/Desktop && mkdir access_practice
   ```

3. Inside the directory, create a file named `secret.txt`:
   ```bash
   cd ./access_practice/
   touch secret.txt
   ```

4. Set the file permissions to allow read and write access for the owner, and no access for group and others:
   ```bash
   ls -li
   chmod 600 secret.txt
    ```
   ![1](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/ebaab2ea-f75c-4a67-9315-ba4fa98ed2ef)


5. Add a new user named `linux1` and change the ownership of the file to that user:
   ```bash
   sudo adduser linux1
   sudo chown linux1 secret.txt
   ```

6. Test accessing the file from both the original user and the different user accounts to observe the access permissions in action:
   ```bash
   sudo cat secret.txt
   ```
![2](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/8b773ca7-91ea-413d-a0ea-15c2d18aa774)

## Exercise 2: User and Group Management

In this exercise, we'll focus on user and group management.

1. Create a new user named `user1`:
   ```bash
   sudo adduser user1
   ```

2. Create a new group named `group1`:
   ```bash
   sudo groupadd group1
   ```

3. Add `user1` to `group1`:
   ```bash
   sudo usermod -G group1 user1
   ```

4. Verify group membership:
   ```bash
   id user1
   ```
   ![1](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/70c8c1a9-19e6-4a87-ac0e-001ee01c293a)


5. Change the ownership of `secret.txt` to `user1` and `group1`:
   ```bash
   sudo chown user1:group1 secret.txt
   ```

6. Set the file permissions to allow read and write access for the owner and the group:
   ```bash
   sudo chmod 600 secret.txt
   ```

7. Test accessing the file both as `user1` and a different user to understand group-based access control:
   ```bash
   su user1
   cat secret.txt
   ```
![2](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/a92a75d7-dd04-4448-85ce-ac4dd57f1101)
