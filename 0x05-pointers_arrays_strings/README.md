# 0x05. C - Pointers, Arrays, and Strings

This repository contains solutions to the assignments and projects of the "0x05. C - Pointers, Arrays, and Strings" module, which is part of the curriculum in the C programming language.

In this module, you will learn about pointers, arrays, and strings in C. These concepts are fundamental to understanding memory management and manipulating data in the C language. By studying this module, you will gain a solid understanding of how to work with these concepts and apply them to solve various programming problems.

## Table of Contents

- [Requirements](#requirements)
- [Project Descriptions](#project-descriptions)
- [Usage](#usage)
- [Files](#files)
- [Authors](#authors)

## Requirements

To compile and run the programs in this repository, you need to have a C compiler installed on your machine. The recommended compiler for these projects is `gcc`. If you don't have `gcc` installed, you can install it by following the instructions for your operating system:

- **Linux**: Run the following command in your terminal:
  ```
  sudo apt-get install build-essential
  ```

- **macOS**: Install the Xcode Command Line Tools by running the following command in your terminal:
  ```
  xcode-select --install
  ```

- **Windows**: You can use MinGW (Minimalist GNU for Windows) to install `gcc`. You can download the installer from the [MinGW website](http://www.mingw.org/) and follow the instructions for installation.

## Project Descriptions

This repository contains several projects and assignments that cover different aspects of pointers, arrays, and strings in C. Each project is contained in its own directory and has a brief description of the task it solves. Here is an overview of the projects:

1. **0-reset_to_98.c**: A function that takes a pointer to an int as a parameter and updates the value it points to to 98.

2. **1-swap.c**: A function that swaps the values of two integers.

3. **2-strlen.c**: A function that returns the length of a string.

4. **3-puts.c**: A function that prints a string, followed by a new line, to the standard output.

5. **4-print_rev.c**: A function that prints a string in reverse.

6. **5-rev_string.c**: A function that reverses a string.

7. **6-puts2.c**: A function that prints one char out of 2 of a string, followed by a new line.

8. **7-puts_half.c**: A function that prints the second half of a string.

9. **8-print_array.c**: A function that prints `n` elements of an array of integers.

10. **9-strcpy.c**: A function that copies the string pointed to by `src`, including the terminating null byte (`'\0'`), to the buffer pointed to by `dest`.

11. **100-atoi.c**: A function that converts a string to an integer.

12. **101-keygen.c**: A program that generates random valid passwords for the program "101-crackme".

For detailed instructions on each project and their requirements, refer to the README file in each project directory.

## Usage

To compile the programs in this repository, navigate to the desired project directory and use the `gcc` compiler. For example, to compile `0-reset_to_98.c`, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic 0-reset_to_98.c -o reset_to_98
```

After successful compilation, you can

 run the program by executing the generated binary:

```bash
./reset_to_98
```

Follow the same steps for compiling and running the other projects in this repository.

## Files

The repository is structured as follows:

```
.
├── 0-reset_to_98.c
├── 1-swap.c
├── 2-strlen.c
├── 3-puts.c
├── 4-print_rev.c
├── 5-rev_string.c
├── 6-puts2.c
├── 7-puts_half.c
├── 8-print_array.c
├── 9-strcpy.c
└── 101-keygen.c
```

## Authors

This module and its projects were developed by [Wisdom Sena](https://github.com/wisdomsena36).
