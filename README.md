# 42_cursus_libft
My own library with many helpful function in C

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
