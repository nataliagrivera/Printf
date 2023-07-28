# _printf

The printf function is a custom C function designed to output formatted text and variables to the standard output. It replicates the functionality of the standard C library function printf, offering you flexibility in printing various data types, such as characters, strings, and integers, using format specifiers.

## Description

The `_printf` function takes a format string as its first argument, which contains placeholders for the values to be printed. These placeholders are represented by format specifiers such as `%c`, `%s`, `%d`, and `%i`. When `_printf` is called, it processes the format string and replaces the placeholders with the corresponding values provided as subsequent arguments.

## Usage

To use the `_printf` function, include the necessary header files:

```c
#include "main.h"
#include <stdarg.h>
#include <stdio.h>
```

Then, you can call `_printf` with the desired format and arguments to print the formatted output:

```c
int main() {
    _printf("Hello, %s! You are %d years old.\n", "Hector", 30);
    return 0;
}
```

In this example, the format specifier `%s` will be replaced by the string "Hector", and the format specifier `%d` will be replaced by the integer 30.

## Supported Format Specifiers

The `_printf` function supports the following format specifiers:

- `%c`: Print a single character.
- `%s`: Print a string.
- `%%`: Print a percent sign.
- `%d` or `%i`: Print a signed decimal integer.

## Example

```c
#include "main.h"
#include <stdio.h>

int main() {
    char initial = 'D';
    char name[] = "Diego";
    int age = 20;

    _printf("Hello, %c. My name is %s, and I am %d years old.\n", initial, name, age);
    return 0;
}
```
## Example of execution

To compile your code with the `_printf` function, use the following command:

```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c# _printf


Output: Hello, D. My name is Diego, and I am 20 years old.
```

## Variadic Arguments

The `_printf` function utilizes variadic arguments (denoted by `...`) through the `va_list` mechanism provided by the `<stdarg.h>` header. Variadic arguments allow the function to accept a variable number of arguments after the `format` parameter. These additional arguments correspond to the values that need to be printed based on the format specifiers in the `format` string.

## Bugs

## Authors 
 Natalia Rivera and Diego Gonzalez
None
```

Now, the man page includes the full compilation command before the output example. Feel free to customize the compilation command according to your specific requirements.
