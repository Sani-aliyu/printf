# printf
This project is an implementation of a simplified version of the printf function in C, referred to as _printf. The _printf function is designed to produce output to the standard output stream. The implementation adheres to specific requirements and constraints outlined in the project guidelines by ALX.

## Requirements
### General

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called main.h
Don’t forget to push your header file
All your header files should be include guarded
Note that we will not provide the _putchar function for this project

## Authorized functions and macros
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

## Tasks
------------
Task 0:
Write a function that produces output according to format.
  - c : converts input into a character
  - s : converts input into a string

Task 1:
 Handle the following conversion specifiers:
  - d : converts input into a base 10 integer
  - i : converts input into an integer

Task 2:
Create a man page for your function

Task 3:
Handle the following conversion specifiers:
  - b : the unsigned int argument is converted to binary

Task 4:
 Handle the following conversion specifiers:
  - u : converts the input into an unsigned integer
  - o : converts the input into an octal number
  - x : converts the input into a hexadecimal number
  - X : converts the input into a hexadecimal number with capital letters

Task 5:
Use a local buffer of 1024 chars in order to call write as little as possible.

Task 6:
Handle the following custom conversion specifier:
  - S : prints the string
  - Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)

Task 7:
Handle the following conversion specifier:
  - p : int input is converted to a pointer address

Task 8:
Handle the following flag characters for non-custom conversion specifiers:
  - \+ : adds a \+ in front of signed positive numbers and a \- in front of signed negative numbers
  - space : same as \+, but adds a space (is overwritten by \+)
  - \# : adds a 0 in front of octal conversions that don't begin with one, and a 0x or 0X for x or X conversions

Task 9:
Handle the following length modifiers for non-custom conversion specifiers:
  - l : converts d, i, u, o, x, X conversions in short signed or unsigned ints
  - h : converts d, i, u, o, x, X conversions in long signed or unsigned ints

Task 10:
Handle the field width for non-custom conversion specifiers.

Task 11:
Handle the precision for non-custom conversion specifiers.

Task 12:
Handle the 0 flag character for non-custom conversion specifiers.

Task 13:
Handle the - flag character for non-custom conversion specifiers.

Task 14:
Handle the following custom conversion specifier:
  - r : prints the reversed string

Task 15:
Handle the following custom conversion specifier:
  - R : prints the rot13'ed string

Task 16:
All the above options work well together.

---
# Author: 
[Sani aliyu bako](https://github.com/Sani-aliyu)
