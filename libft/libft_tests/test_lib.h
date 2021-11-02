#ifndef TEST_LIB_H
# define TEST_LIB_H

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define RESET "\033[0m"

#define ERR_MESS "[OK]  "
#define SUC_MESS "[KO]  "

int bool_verify(int exp, int real);
int int_verify(int exp, int real);
void test(char *name, char *cases, int (*f1)(), int (*f2)(), int (*test_func)());

#endif