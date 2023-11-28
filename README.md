# 42_cursus_libft
This project is part of the 42Lisboa curriculum and aims to implement a C library with common utility functions frequently used in C projects.
Some of the functions are a reimplementation of the C Standard Library, while others are entirely new functions. For example, there are functions that assist in creating, adding, and removing elements, as well as cleaning linked lists.

## Functions 

- [`ft_isalpha`](ft_isalpha.c)			- test for alphabetic character.
- [`ft_isdigit`](ft_isdigit.c)			- test for decimal-digit character.
- [`ft_isalnum`](ft_isalnum.c)			- test for alphanumeric character.
- [`ft_isascii`](ft_isascii.c)			- test for ASCII character.
- [`ft_isprint`](ft_isprint.c)			- test for printing character.
- [`ft_strlen`](ft_strlen.c)				- find length of string.
- [`ft_memset`](ft_memset.c)		- write a byte to a byte string.
- [`ft_bzero`](ft_bzero.c)		- write zeroes to a byte string.
- [`ft_memcpy`](ft_memcpy.c)		- copy memory area.
- [`ft_memmove`](ft_memmove.c)	- copy byte string.
- [`ft_strlcpy`](ft_strlcpy.c)			- string copying (with size limit).
- [`ft_strlcat`](ft_strlcat.c)			- string concatenation (with size limit).
- [`ft_toupper`](ft_toupper.c)			- lower case to upper case letter conversion.
- [`ft_tolower`](ft_tolower.c)			- upper case to lower case letter conversion.
- [`ft_strchr`](ft_strchr.c)				- locate character in string (first occurrence).
- [`ft_strrchr`](ft_strrchr.c)			- locate character in string (last occurence).
- [`ft_strncmp`](ft_strncmp.c)			- compare strings (with size limit).
- [`ft_memchr`](ft_memchr.c)		- locate byte in byte string.
- [`ft_memcmp`](ft_memcmp.c)		- compare byte string.
- [`ft_strnstr`](ft_strnstr.c)			- locate a substring in a string (with size limit).
- [`ft_atoi`](ft_atoi.c)		- convert ASCII string to integer.

- [`ft_calloc`](ft_calloc.c)	- memory allocation.
- [`ft_strdup`](ft_strdup.c)				- save a copy of a string (with malloc).

- [`ft_substr`](ft_substr.c)				- extract substring from string.
- [`ft_strjoin`](ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
- [`ft_strtrim`](ft_strtrim.c)			- trim beginning and end of string with the specified characters.
- [`ft_split`](ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
- [`ft_itoa`](ft_itoa.c)					- convert integer to ASCII string.
- [`ft_strmapi`](ft_strmapi.c)			- create new string from modifying string with specified function (with malloc).
- [`ft_striteri`](ft_striteri.c)			- modifies a string passed as an argument with specified function.
- [`ft_putchar_fd`](ft_putchar_fd.c)		- output a character to given file.
- [`ft_putstr_fd`](ft_putstr_fd.c)		- output string to given file.
- [`ft_putendl_fd`](ft_putendl_fd.c)		- output string to given file with newline.
- [`ft_putnbr_fd`](ft_putnbr_fd.c)		- output integer to given file.

- [`ft_lstnew`](ft_lstnew.c)				- create new list.
- [`ft_lstsize`](ft_lstsize.c)			- count elements of a list.
- [`ft_lstlast`](ft_lstlast.c)			- find last element of list.
- [`ft_lstadd_back`](ft_lstadd_back.c)	- add new element at end of list.
- [`ft_lstadd_front`](ft_lstadd_front.c)	- add new element at beginning of list.
- [`ft_lstdelone`](ft_lstdelone.c)		- delete element from list.
- [`ft_lstclear`](ft_lstclear.c)			- delete sequence of elements of list from a starting point.
- [`ft_lstiter`](ft_lstiter.c)			- apply function to content of all list's elements.
- [`ft_lstmap`](ft_lstmap.c)				- apply function to content of all list's elements into new list.

## Installation / Usage
This simple example works on linux and MacOs. It is recommended to utilize a Makefile to facilitate the compilation process for all the files.

Clone repo inside the folder of your project:
```shell
git clone https://github.com/dspereira/42Cursus-Libft.git libft
```
Build:
```shell
make -C ./libft
```
Usage:
```C
/* main.c */

#include <stdio.h>
#include "libft.h"

int main(void)
{
    printf("Hello Libft %i!\n", ft_atoi("42"));
    return (0);
}
```
Compile:
```shell
gcc main.c libft/libft.a -I libft/includes -o libft_example
```
Run:
```shell
./libft_example
```

## License

This project is licensed under the [MIT License](https://github.com/dspereira/42Cursus-Libft/blob/main/LICENSE).

## Contact

If you have any questions or comments about this project, please feel free to contact me at diogo.s.pereira@outlook.pt.
