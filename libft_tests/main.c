#include "test_lib.h"
#include "../libft/libft.h"

//gcc main.c test_lib.c test_lib.h ../libft/libft.a

int main(void)
{
  test("ft_isalpha", "ZAaz@^D1", &isalpha, &ft_isalpha, &bool_verify);
  test("ft_isdigit", "/012679:", &isdigit, &ft_isdigit, &bool_verify);
  test("ft_isalnum", "/014a89:", &isalnum, &ft_isalnum, &bool_verify);
  char cases[] = {'A', '3', '{', '0', 126, 127, 128, 200, '\0'};
  test("ft_isascii", cases, &isascii, &ft_isascii, &bool_verify);
  char cases1[] = {' ', '~', '{', '0', 'A', 31, 127, 128, '\0'};
  test("ft_isprint", cases1, &isprint, &ft_isprint, &bool_verify);
  test("ft_toupper", "arz{`3AZ", &toupper, &ft_toupper, &int_verify);
  test("ft_tolower", "ARZ@[3az", &tolower, &ft_tolower, &int_verify);

  printf("\n\nft_substr: |%s|", ft_substr("test", 2, 60));
  printf("\nft_strjoin: |%s|\n\n", ft_strjoin("test", "123"));
  printf("\nft_strtrim: |%s|", ft_strtrim("        a   ", " "));
  
  return (0);
}