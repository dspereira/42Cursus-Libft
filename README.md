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

For more info see the [subject](https://github.com/dspereira/42Cursus-Libft/blob/main/en.subject.pdf).

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
- [`ft_strrchr`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_strrchr.c)			- Locate the last occurrence of a character in a string.
- [`ft_strncmp`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_strncmp.c)			- Compare two strings up to a specified number of characters.
- [`ft_memchr`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_memchr.c)	            - Locate the first occurrence of a byte in a byte array.
- [`ft_memcmp`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_memcmp.c)		        - Compare two memory areas up to a specified number of bytes.
- [`ft_strnstr`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_strnstr.c)			- Locate a substring in a string with a specified length limit.
- [`ft_atoi`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_atoi.c)		            - Convert an ASCII string to an integer.
- [`ft_calloc`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_calloc.c)	            - Allocate memory and initialize it with zeros.
- [`ft_strdup`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_strdup.c)				- Duplicate a string.
- [`ft_substr`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_substr.c)				- Extract a substring from a string.
- [`ft_strjoin`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_strjoin.c)			- Concatenate two strings.
- [`ft_strtrim`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_strtrim.c)			- Trim the specified characters from the beginning and end of a string.
- [`ft_split`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_split.c)				- Split a string with a specified character as a delimiter into an array of strings.
- [`ft_itoa`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_itoa.c)					- Convert an integer to an ASCII string.
- [`ft_strmapi`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_strmapi.c)			- Apply a given function to each character in a string.
- [`ft_striteri`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_striteri.c)			- Apply a given function to each character in a string with its index.
- [`ft_putchar_fd`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_putchar_fd.c)		- Write a character to a specified file descriptor.
- [`ft_putstr_fd`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_putstr_fd.c)		- Write a string to a specified file descriptor.
- [`ft_putendl_fd`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_putendl_fd.c)		- Write a string followed by a newline to a specified file descriptor.
- [`ft_putnbr_fd`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_putnbr_fd.c)		- Write an integer, converted to a string, to a specified file descriptor.
- [`ft_lstnew`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_lstnew.c)				- Create a new node for a linked list.
- [`ft_lstsize`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_lstsize.c)			- Count the number of elements in a linked list.
- [`ft_lstlast`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_lstlast.c)			- Get the last element of a linked list.
- [`ft_lstadd_back`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_lstadd_back.c)	- Add a new element at the end of a linked list.
- [`ft_lstadd_front`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_lstadd_front.c)	- Add a new element at the beginning of a linked list.
- [`ft_lstdelone`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_lstdelone.c)		- Delete an element from a linked list.
- [`ft_lstclear`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_lstclear.c)			- Delete a sequence of elements from a linked list.
- [`ft_lstiter`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_lstiter.c)			- Apply a function to the content of all elements in the linked list.
- [`ft_lstmap`](https://github.com/dspereira/42Cursus-Libft/blob/main/srcs/ft_lstmap.c)				- Create a new linked list applying a given function to all content of elements.

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
