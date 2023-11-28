# 42_cursus_libft

## Table of Content
1. [About Libft](#about-libft)
2. [Functions](#functions)
3. [Installation / Usage](#installation--usage)
4. [License](#license)
5. [Contact](#contact)

## About Libft

This project is part of the 42Lisboa curriculum and aims to implement a C library with common utility functions frequently used in C projects.
Some of the functions are a reimplementation of the C Standard Library, while others are entirely new functions. For example, there are functions that assist in creating, adding, and removing elements, as well as cleaning linked lists.

## Functions 

- [`ft_isalpha`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_isalpha.c)			- Check if the character is alphabetic.
- [`ft_isdigit`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_isdigit.c)			- Check if the character is digit.
- [`ft_isalnum`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_isalnum.c)			- Check if the character is alphanumeric.
- [`ft_isascii`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_isascii.c)			- Check if the character is ASCII.
- [`ft_isprint`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_isprint.c)			- Check if the character is printable.
- [`ft_strlen`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_strlen.c)				- Get the length of the string.
- [`ft_memset`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_memset.c)		        - Write a specified number of bytes with a given value in an array of bytes.
- [`ft_bzero`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_bzero.c)		        - Write a specified number of zeros in an array of bytes.
- [`ft_memcpy`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_memcpy.c)	            - Copy a specified number of bytes from one array of bytes to another array of bytes.
- [`ft_memmove`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_memmove.c)	        - Copy a specified number of bytes from one array of bytes to another array of bytes, handling potential overlap.
- [`ft_strlcpy`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_strlcpy.c)			- Copy a specified number of characters from one string to another string.
- [`ft_strlcat`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_strlcat.c)			- Concatenate two strings with a specified size limit.  
- [`ft_toupper`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_toupper.c)			- Convert to uppercase letter.
- [`ft_tolower`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_tolower.c)			- Convert to lowercase letter.
- [`ft_strchr`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_strchr.c)				- Locate the first occurrence of a character in a string.


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
