# User SignUp Application

This simple User SignUp application allows users to add and fetch user records. The program is written in C++ and provides a text-based interface for user interaction. Below is a brief documentation of the code:

## Overview

The application consists of a `user` class representing a user record, with attributes such as name, age, option, and ID. Users can add records, fetch records based on user ID, and quit the application. The main functionality is encapsulated within the `user` class, and the program is executed within the `main` function.
![image](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/cc2a9181-363a-40c1-96ed-b35ffbd58239)
![image](https://github.com/AhmedAdelWafdy7/MasterEmbeddedLinux/assets/107740350/8b1cedda-d55c-41c8-9b54-aa39e769f0e1)


## Dependencies

- `iostream`: Input and output stream handling in C++.
- `string`: String manipulation library in C++.
- `vector`: Dynamic array implementation for storing user records.
- `unistd.h`: Header file providing access to the POSIX operating system API (used for `usleep` function).

## Class: `user`

### Attributes

- `name`: User's name.
- `age`: User's age.
- `option`: User's selected option (1 for Add Record, 2 for Fetch Record, 3 for Quit).
- `ID`: User's unique identifier.
- `MAX_RECORDS`: Constant representing the maximum number of user records allowed.

### Methods

- **Constructor**: Initializes a `user` object with a given name and age.
- `getName() const`: Returns the user's name.
- `setName(string n)`: Sets the user's name.
- `get_user_info()`: Gets user information (name and age) from the console.
- `get_user_option()`: Displays options to the user and captures their choice.
- `fetch_record(const uint32_t id)`: Fetches a user record based on the provided user ID.
- `print_user_info(uint32_t ID)`: Prints user information based on the provided user ID.
- `add_record(string username, uint32_t user_age)`: Adds a new user record to the records vector.

## Enum: `OPTION`

Enumerates the possible user options:
- `ADD_RECORD`: Option to add a new user record.
- `FETCH_RECORD`: Option to fetch a user record.
- `QUIT`: Option to quit the application.

## Function: `main()`

- Initializes the application and enters a loop for user interaction.
- Creates a `user` object and prompts the user to choose an option.
- Executes the corresponding functionality based on the user's choice.
- Provides a user-friendly message upon quitting the application.

## Additional Note

The application includes a delay before exiting (using `usleep`) after the user chooses to quit, providing a brief farewell message.

