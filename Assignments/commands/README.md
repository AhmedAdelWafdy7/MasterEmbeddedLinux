
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

![Exercise 1 Screenshot](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 00-05-42.png)

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

![Exercise 2 Screenshot](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 00-40-18.png)

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

![Exercise 3 Screenshot 1](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 00-57-50.png)

![Exercise 3 Screenshot 2](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 00-58-22.png)

```shell
nano file.txt
cat file.txt > output.txt
```

![Exercise 3 Screenshot 3](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 00-59-35.png)

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

![Exercise 4 Screenshot 1](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 08-24-47.png)

![Exercise 4 Screenshot 2](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 08-25-04.png)

![Exercise 4 Screenshot 3](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 08-25-13.png)

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

![Exercise 5 Screenshot 1](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 08-31-57.png)

![Exercise 5 Screenshot 2](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 08-32-38.png)

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

![Exercise 6 Screenshot 1](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 08-54-33.png)

List all processes in real-time using `top`

```shell
top
```

![Exercise 6 Screenshot 2](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 08-55-28.png)

Find Firefox process using `pgrep`

```shell
pgrep firefox
```

Find processes that contain "firefox" in their command line

```shell
top -c -p $(pgrep -d',' -f firefox)
```

![Exercise 6 Screenshot 3](/home/benwafdy/Pictures/Screenshots/Screenshot from 2023-09-28 08-59-46.png)
```

