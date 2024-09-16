# 42-ftprintf

## Table of Contents

- [Introduction](#introduction)
- [Installation](#installation)
- [Usage](#usage)

## Introduction

A [42 School](https://www.42network.org/) project to create a reduced implementation of the clang `stdio` `printf` function.

The following conversions are implemented:

- `%c` - single char
- `%s` - prints a string
- `%p` - prints a pointer in hex format
- `%d` - prints a decimal number
- `%i` - prints and int in base 10
- `%u` - prints an unsigned decimal
- `%x` - prints a lowercase hex number
- `%X` - prints an uppercase hex number
- `%%` - prints a percentage sign

Buffer management is not implemented.

## Installation

Git clone the repository:

```shell
https://github.com/TimHopg/42-ft_printf.git
```

Run `make` from within the directory to archive `libft.a` and then combine it with `libftprintf.a`.

`make clean` will remove object files.

`make fclean` will remove library and object files.

## Usage

To use include the `libftprintf.a` file in your project and include the `libftprintf.h` header in your source code.

Compile as follows:

``` shell
cc main.c -L. -lftprintf -o main
```
