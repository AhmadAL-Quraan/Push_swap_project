
## Description 

The **Libft** project is the foundational assignment of the 42 Common Core. Its primary goal is to recreate a custom C standard library containing essential functions that will be used in all future C projects within the curriculum. By reimplementing standard functions from `libc`, this project provides a deep understanding of memory management, string manipulation, and pointers.


## Instructions

### Compilation

To compile the library, navigate to the root directory and use the provided **Makefile**. The following rules are available:

- `make` or `make all`: Compiles the source files and generates the `libft.a` library.
- `make clean`: Removes the object files (`.o`).
- `make fclean`: Removes object files and the compiled library.
- `make re`: Recompiles the entire project from scratch.    
- `make bonus`: Compiles the additional linked list functions.
    

### Execution

To use this library in your own C project, include the header in your code:

```C
#include "libft.h"
```

When compiling your project, link the library:
```bash
gcc main.c -L. -lft
```

## Library Details

The library created for this project, `libft.a`, is a collection of functions designed to handle common tasks in C. It includes:

- **Libc Functions**: Re-implementations of standard functions like `ft_strlen`, `ft_memcpy`, and `ft_atoi`.
    
- **Additional Functions**: Utilities not found in the standard library, such as `ft_split` for string parsing and `ft_itoa` for integer conversion.
    
- **Linked List Management**: A suite of functions to handle dynamic data structures, including creation, addition, and deletion of nodes.
