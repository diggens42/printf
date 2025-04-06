# ft_printf

A custom implementation of the C standard library's `printf` function that handles various format specifiers.

## Overview

This project implements a simplified version of the `printf` function from the C standard library. It uses variadic functions to handle multiple arguments and supports several format specifiers for different data types.

## Supported Format Specifiers

- `%c`: Prints a single character
- `%s`: Prints a string (as defined by the common C convention)
- `%p`: Prints a void pointer in hexadecimal format
- `%d`: Prints a decimal (base 10) number
- `%i`: Prints an integer in base 10
- `%u`: Prints an unsigned decimal (base 10) number
- `%x`: Prints a number in hexadecimal (base 16) lowercase format
- `%X`: Prints a number in hexadecimal (base 16) uppercase format
- `%%`: Prints a percent sign


## Usage

```c

int main(void)
{
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, world!");
    ft_printf("Pointer: %p\n", (void *)0x12345678);
    ft_printf("Decimal: %d\n", 42);
    ft_printf("Integer: %i\n", -42);
    ft_printf("Unsigned: %u\n", 4294967295);
    ft_printf("Hex (lowercase): %x\n", 255);
    ft_printf("Hex (uppercase): %X\n", 255);
    ft_printf("Percent sign: %%\n");

    return 0;
}
```

