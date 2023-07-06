# 0x08-recursion

This repository contains solutions to problems related to recursion in the field of computer science. The solutions are implemented in the C programming language.

## Table of Contents

- [Description](#description)
- [Requirements](#requirements)
- [Files](#files)
- [Usage](#usage)

## Description

Recursion is a powerful concept in computer science that involves solving a problem by breaking it down into smaller subproblems. This repository provides solutions to various problems that can be solved using recursion. The solutions are implemented in C, a widely used programming language known for its efficiency and low-level control.

The repository is organized into individual files, each addressing a specific problem. Each file contains a detailed explanation of the problem statement, as well as the recursive approach used to solve it. The solutions are accompanied by example inputs and outputs to help understand the problem better.

## Requirements

To compile and run the C programs in this repository, you need to have the following installed:

- C compiler (e.g., gcc)

## Files

The repository contains the following files:

- `0-puts_recursion.c`: Implementation of the `puts_recursion` function that prints a string followed by a new line using recursion.
- `1-print_rev_recursion.c`: Implementation of the `print_rev_recursion` function that prints a string in reverse using recursion.
- `2-strlen_recursion.c`: Implementation of the `strlen_recursion` function that returns the length of a string using recursion.
- `3-factorial.c`: Implementation of the `factorial` function that calculates the factorial of a given number using recursion.
- `4-pow_recursion.c`: Implementation of the `pow_recursion` function that calculates the value of a number raised to a given power using recursion.
- `5-sqrt_recursion.c`: Implementation of the `sqrt_recursion` function that calculates the square root of a number using recursion.
- `6-is_prime_number.c`: Implementation of the `is_prime_number` function that checks if a number is a prime number using recursion.
- `100-is_palindrome.c`: Implementation of the `is_palindrome` function that checks if a string is a palindrome using recursion.
- `101-wildcmp.c`: Implementation of the `wildcmp` function that compares two strings and returns 1 if the strings can be considered identical, otherwise returns 0. The comparison can include the special character `*`, which can match any string, including an empty string.

## Usage

To use the solutions provided in this repository, follow these steps:

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/0x08-recursion.git
   ```

2. Change your current directory to the cloned repository:

   ```bash
   cd 0x08-recursion
   ```

3. Compile the desired C file using a C compiler (e.g., gcc):

   ```bash
   gcc -Wall -Werror -Wextra -pedantic <filename.c> -o <output-file>
   ```

4. Run the compiled program:

   ```bash
   ./<output-file>
   ```
