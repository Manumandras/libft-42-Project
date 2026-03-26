*This project has been created as part of the 42 curriculum by mmittelb.*

# libft

## Description

libft is a reimplementation of a subset of the C standard library, written from scratch in C.
The goal of this project is to build a personal library of commonly used functions that can be reused in later 42 projects.

The library provides implementations for string manipulation, memory handling, character checks, conversions, and file descriptor output functions.
Additionally, the bonus part introduces a simple linked list API.

All functions are compiled into a static library libft.a, which can be linked against other programs.

<br>

## Platform support

This project is developed for Unix-like systems, primarily Linux. It uses Unix-oriented tooling and a Makefile-based build system, so it is generally not intended to run natively on Windows without adaptation. On Windows, the recommended way to build and run it is through WSL.

<br>

## Instructions

### Build

Mandatory Version.

```bash
make
```

Bonus version.

```bash
make bonus
```

### Run

After building libft.a, you can link it with your own programs.

Example program:

```c
#include "libft.h"

int main(void)
{
	ft_putchar_fd('A', 1);
	return (0);
}
```

Compile and run:

```bash
cc main.c libft.a
./a.out
```
