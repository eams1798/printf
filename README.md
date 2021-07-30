# Making our own printf

_printf - writes a string with some specified formats

### SYNOPSIS
#include "holberton.h"

int _printf(const char *format, ...);

### DESCRIPTION
Writes a string with all given formats in the stdout, the standard output stream.

### RETURN
Returns the number of characters printed (except the null byte at the end of the string).

### OPTIONS
The formats of the _printf function are located in its first argument, in the given string. The syntax of the formats is a '%', followed by one of the next characters:

**c**
Prints a character

**s**
Prints a new string

**d**
Prints an integer

**i**
Also prints an integer

**u**
Prints an unsigned integer

**b**
Converts an unsigned integer to binary system, and prints it

**o**
Converts an unsigned integer to octal system, and prints it

**x**
Converts an unsigned integer to hexadecimal system, and prints it using lowercase letters

**X**
Converts an unsigned integer to hexadecimal system, and prints it using uppercase letters

**p**
Prints the address of a memory space allocated by a pointer

**S**
Prints a string and the non-printable characters are printed as "\x", followed by their ASCII code value in hexadecimal

**r**
Prints a string in reverse

**R**
Prints the rot13'ed string

**%**
Literally prints a percent

*Each new format located in the string to be printed indicate a new argument to print with the specified format*

### EXAMPLES
To print a string:
```
_printf("Let's try to printf a simple sentence.\n");
```
Result
```
Let's try to printf a simple sentence.
```
To print a number, in this case, someone's age:
```
_printf("He is %d years old\n", 25);
```
Result
```
He is 25 years old
```
To convert a number:
```
_printf("%d in binary is %b, in octal is %o and in hexadecimal is %X\n", 27, 27, 27, 27);
```
Result
```
27 in binary is 11011, in octal is 33 and in hexadecimal is 1B
```

#### Group members:
- Karla Díaz
- Estéfano Misme
