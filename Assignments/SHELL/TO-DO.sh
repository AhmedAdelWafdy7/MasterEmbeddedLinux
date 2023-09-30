#!/bin/bash

# how to use it : ./To-Do.sh option task

todo_file="todo.txt"

case $1 in 
	add)	#add task
		if [[ -z $2 ]]; then
			echo "please give me a task to add. "
			exit 1
		fi
		# add task to the file with tasks 
		line="$(( $(wc -l < "$todo_file") + 1 )). $2"
		echo -e "Task added:\n$line" >> "$todo_file"
		;;
	delete)		#delete task
		if [[ -z $2 ]]; then
			echo "Please give me a task delete. "
			exit 1
		fi
	# check if task is valid
		if [[ ! $2 =~ ^[0-9]+$ ]]; then
			echo "Invalid number for the task: $2"
			exit 1
		fi
	# delete the line that matches from the file
		sed -i -e "/^$2\./d" "$todo_file"
		echo "Task deleted: $2"
		;;
	view)	#check if file is empty
		if [[ ! -s $todo_file ]]; then
			echo "your TO-DO list is empty."
			exit 0
		fi
	# print contents
		echo -e "\e[1mYour TO-DO list:\e[0m"
		while IFS= read -r line; do
			if [[ $line =~ ^DONE ]]; then
			       	#if task is done print it with mark
				echo -e "\e[32m✔ ${line#DONE }\e[0m"
			else
				echo -e "\e[33m- $line\e[0m"
			fi
		done < "$todo_file"
		;;
	# mark task is done in file with number
	done)
	#check if task is given
		if [[ -z $2 ]]; then
			echo "please give me a task number to mark. "
			exit 1
		fi
	#check if number is valid
		if [[ ! $2 =~ ^[0-9]+$ ]]; then
			echo "Invalid task number: $2"
			exit 1
		fi
	#find line
		sed -i -e "s/^$2\./DONE &/" "$todo_file"
		echo "Task marked as Done: $2"
		;;

	# usage message
	*)
		echo "usage: ./To-Do.sh [option] [task]"
		echo "Options:"
		echo " add [task]	Add a new task to the To-DO list"
		echo " delete [num]	Delete a task from TO-Do list by its number"
		echo " view		view all the tasks in the TO-DO list"
		echo " done [num]	Mark a task as done in the To- Do list by its number"
esac
