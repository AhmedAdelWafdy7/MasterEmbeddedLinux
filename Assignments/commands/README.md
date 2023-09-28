
# Commands-fs

## Exercise 1: Basic Navigation

- Use `ls` to list all files and directories in the current directory.
- Use `cd` to navigate to a specific directory.
- Use `pwd` to print the current working directory.

### Commands used to solve Exercise 1

```shell
ls
cd ./assigments/
pwd
```

![Screenshot from 2023-09-28 00-05-42](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/347eb576-c16d-43d4-8d04-3a46ed023e02)

## Exercise 2: File and Directory Operations

- Create a directory named "practice" in the current directory using `mkdir`.
- Create an empty file named "file.txt" within the "practice" directory using `touch`.
- Copy "file.txt" to a new file "file_backup.txt" using `cp`.
- Move "file_backup.txt" to another directory using `mv`.
- Rename "file.txt" to "new_file.txt" using `mv`.
- Delete the "new_file.txt" using `rm`.

### Commands used to solve Exercise 2

```shell
mkdir practice
cd ./practice/
touch file.txt
cp file.txt file_backup.txt
mv file_backup.txt /home/benwafdy/Desktop/assigments/commands-fs
mv file.txt new_file.txt
rm new_file.txt
```

![Screenshot from 2023-09-28 00-40-18](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/0e6c9798-938f-49a3-b78d-b220360b9c23)


## Exercise 3: File Viewing and Editing

- Create a text file using `echo` or a text editor like `nano`.
- View the contents of the file using `cat`.
- View the contents of the file using `less`.
- Edit the file using `nano` or another text editor.
- Redirect the output of a command (e.g., `ls`) to a file using `>`.

### Commands used to solve Exercise 3

```shell
echo "Hello ahmed" >> file.txt
cat file.txt 
less file.txt
```

![Screenshot from 2023-09-28 00-57-50](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/628c2baf-d0e7-4546-b1b6-1a3404d59652)

![Screenshot from 2023-09-28 00-58-22](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/a780a17f-bce5-4d4b-939b-b02ca5b85acf)


```shell
nano file.txt
cat file.txt > output.txt
```

![Screenshot from 2023-09-28 00-59-35](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/fa85c8ae-0528-402b-a24e-d76c1db8d630)


## Exercise 4: File Permissions

- Create a file and set specific permissions using `chmod`.
- Check the permissions of the file using `ls -l`.
- Change the owner and group of the file using `chown`.
- Verify the changes using `ls -l`.

### Commands used to solve Exercise 4

```shell
ls -l
chmod 642 file.txt
cat /etc/passwd
cat /etc/group
sudo chown wafdy:linux1 file.txt
```

![Screenshot from 2023-09-28 08-24-47](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/34c179d8-31eb-4026-ad62-5940311096da)

![Screenshot from 2023-09-28 08-25-04](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/87b0b3c0-c8ec-4c39-ab27-db7136d3a421)

![Screenshot from 2023-09-28 08-25-13](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/48dd07ba-35cf-461c-ba0e-f56d49d941f8)

## Exercise 5: User and Group Management

- Create a new user using `useradd`.
- Set a password for the new user using `passwd`.
- Create a new group using `groupadd`.
- Add the user to the newly created group using `usermod`.

### Commands used to solve Exercise 5

```shell
sudo adduser assignment
sudo groupadd assignmentgroup
sudo usermod -G assignmentgroup assignment
cat /etc/group
```
![Screenshot from 2023-09-28 08-31-57](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/b3b8ab95-568b-4163-8208-d1f7f3d9f2ce)

![Screenshot from 2023-09-28 08-32-38](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/750a34a8-00ac-45c3-8b9c-3ae040363682)

## Exercise 6: Process Management

- List all processes using `ps`.
- List processes in real-time using `top`.
- Find a specific process using `pgrep`.
- Terminate a process using `kill`.

### Commands used to solve Exercise 6

List all processes using `ps`

```shell
ps
```
![Screenshot from 2023-09-28 08-54-33](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/a2bb13e7-9b37-4892-96e6-1994843e6211)

List all processes in real-time using `top`

```shell
top
```

![Screenshot from 2023-09-28 08-55-28](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/b37c8a63-a4bf-4a44-b188-c3a8ba499d80)

Find Firefox process using `pgrep`

```shell
pgrep firefox
```

Find processes that contain "firefox" in their command line

```shell
top -c -p $(pgrep -d',' -f firefox)
```
![Screenshot from 2023-09-28 08-59-46](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/b787b934-5033-4e63-b6b2-e267f551ee52)

# Exercise 7: File Searching

In this exercise, we will use the `find` and `grep` commands to search for specific files and strings within files.

## Commands Used to Solve Exercise 7

1. List files in the current directory:
   ```bash
   ls
   ```

2. View the contents of the file `output.txt`:
   ```bash
   cat output.txt
   ```

3. Search for a file named `output.txt` that contains the word "Hello" and print its path:
   ```bash
   find . -name output.txt -exec grep -l Hello {} \;
   ```

   Note: The above command is used to search for a file named `output.txt` that contains the word "Hello."

4. Search for the string "wafdy" in the file `output.txt`:
   ```bash
   grep wafdy output.txt
   ```

   ![Screenshot](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 20-46-00.png)

# Exercise 8: Archiving and Compression

In this exercise, we will create a tar archive of a directory, compress it using gzip, and then extract the compressed archive.

## Commands Used to Solve Exercise 8

1. List files in the current directory:
   ```bash
   ls
   ```

2. Create a tar archive of the `commands-fs/` directory:
   ```bash
   sudo tar -cvf commands-fs.tar commands-fs/
   ```

3. Compress the tar archive using gzip:
   ```bash
   gzip commands-fs.tar
   ```

4. Extract the contents of the compressed tar archive:
   ```bash
   tar -xvf commands-fs.tar.gz
   ```

   ![Screenshot](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 21-09-49.png)

# Exercise 9: Networking

In this exercise, we will perform network-related tasks such as pinging a website or IP address, checking network interfaces, and listing open ports.

## Commands Used to Solve Exercise 9

1. Ping google.com to test network connectivity:
   ```bash
   ping google.com
   ```

2. Check network interfaces and their configurations:
   ```bash
   ifconfig
   ```

   ![Screenshot](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 21-23-58.png)

3. List all open ports:
   ```bash
   netstat -tulpn
   ```

   ![Screenshot](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 21-29-53.png)

   ![Screenshot](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 21-31-07.png)

# Exercise 10: Package Management

In this exercise, we will perform package management tasks using the package manager.

## Commands Used to Solve Exercise 10

1. Update the package list using the package manager (e.g., apt update):
   ```bash
   sudo apt update
   ```

   ![Screenshot](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 21-37-10.png)

# Exercise 11: File Permissions and Ownership

This exercise has already been covered in previous exercises.

# Exercise 12: Text Processing

In this exercise, we will use `sed` to replace a specific word in a text file, `awk` to extract specific columns from a CSV file, and `grep` to find lines in a file that match a specific pattern.

## Commands Used to Solve Exercise 12

1. View the contents of the file `output.txt`:
   ```bash
   cat output.txt
   ```

2. Use `sed` to replace the word "wafdy" with "adel" in `output.txt`:
   ```bash
   sed -i 's/wafdy/adel/g' output.txt
   ```

   ![Screenshot](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 21-54-12.png)

3. Use `awk` to extract specific columns (1st, 3rd, and 5th) from `micromouse_V2.0-all-pos.csv`:
   ```bash
   awk -F ',' '{print $1,$3,$5}' micromouse_V2.0-all-pos.csv
   ```

   ![Screenshot](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 21-55-15.png)

4. Use `grep` to find lines in `output.txt` that contain the letter "a":
   ```bash
   grep 'a' output.txt
   ```

   ![Screenshot](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 22-01-50.png)

These are the commands used to solve Exercise 12.
