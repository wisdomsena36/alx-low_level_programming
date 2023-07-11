# 0x0B-malloc_free

This repository contains the source code for the "0x0B-malloc_free" project. It focuses on understanding and implementing memory allocation and deallocation using the `malloc` and `free` functions in the C programming language.

## Description

The "0x0B-malloc_free" project is part of the curriculum at ALX (Software Engineering) and aims to provide hands-on experience with dynamic memory allocation in C.

The repository includes the following files:

- **0-create_array.c:** This file contains a function `create_array` that creates an array of characters, initializes it with a specific character, and returns a pointer to the array.
- **1-strdup.c:** This file contains a function `_strdup` that duplicates a string and returns a pointer to the newly allocated memory containing the duplicated string.
- **2-str_concat.c:** This file contains a function `str_concat` that concatenates two strings and returns a pointer to the newly allocated memory containing the concatenated string.
- **3-alloc_grid.c:** This file contains a function `alloc_grid` that creates a 2-dimensional array of integers and initializes all elements to 0.
- **4-free_grid.c:** This file contains a function `free_grid` that frees the memory allocated for a 2-dimensional array previously created using `alloc_grid`.
- **100-argstostr.c:** This file contains a function `argstostr` that concatenates all the arguments of the program into a single string.
- **101-strtow.c:** This file contains a function `strtow` that splits a string into words and returns a pointer to an array of strings.

## Requirements

- The code is written in C.
- The code is compiled using `gcc`. The command is as follows: `gcc -Wall -Werror -Wextra -pedantic <source files> -o <output file>`.
- The code does not use global variables.
- The code follows the [Betty](https://github.com/holbertonschool/Betty) style.

## Usage

1. Clone the repository:
   ```
   git clone https://github.com/wisdomsena36/0x0B-malloc_free.git
   ```

2. Navigate to the project directory:
   ```
   cd 0x0B-malloc_free
   ```

3. Compile the desired C file using `gcc`. For example, to compile `0-create_array.c`, use the following command:
   ```
   gcc -Wall -Werror -Wextra -pedantic 0-create_array.c -o create_array
   ```

4. Execute the compiled program:
   ```
   ./create_array
   ```

## Author

This project was created by Wisdom E. Sena.
