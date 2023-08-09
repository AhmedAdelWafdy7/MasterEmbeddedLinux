```markdown
# Exercise 1: File Permissions and Ownership

In this exercise, we'll explore file permissions and ownership in Linux.

1. To know the owner of the session, you can use the following command:
   ```
   whoami
   ```

2. Create a directory called `access_practice` on your Desktop:
   ```
   cd ~/Desktop && mkdir access_practice
   ```

3. Navigate to the newly created directory and create a file named `secret.txt`:
   ```
   cd ./access_practice/
   touch secret.txt
   ```

4. Set the file permissions to allow read and write access for the owner, and no access for the group and others:
   ```
   ls -li
   chmod 600 secret.txt
   ```

5. Add a new user named `linux1`:
   ```
   sudo adduser linux1
   ```

6. Change the ownership of the file to the newly created user:
   ```
   sudo chown linux1 secret.txt
   ```

7. Test accessing the file from both the original user and the different user accounts to observe the access permissions in action:
   ```
   sudo cat secret.txt
   ```

# Exercise 2: User and Group Management

In this exercise, we'll focus on user and group management.

1. Create a new user named `user1`:
   ```
   sudo adduser user1
   ```

2. Create a new group named `group1`:
   ```
   sudo groupadd group1
   ```

3. Add `user1` to `group1`:
   ```
   sudo usermod -G group1 user1
   ```

4. Verify group membership:
   ```
   id user1
   ```

5. Change the ownership of `secret.txt` to `user1` and `group1`:
   ```
   sudo chown user1:group1 secret.txt
   ```

6. Set the file permissions to allow read and write access for the owner and the group:
   ```
   sudo chmod 600 secret.txt
   ```

7. Test accessing the file both as `user1` and a different user to understand group-based access control:
   ```
   su user1
   cat secret.txt
   ```
