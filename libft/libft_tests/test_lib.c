#include "test_lib.h"

int bool_verify(int exp, int real)
{
  int sucess;
  if((exp && real) || (!exp && !real))
  {
	printf("%s%s%s",GREEN, SUC_MESS, RESET);
	sucess = 1;
  }
  else
  {
	printf("%s%s%s",RED, ERR_MESS, RESET);
	sucess = 0;
  }
  return (sucess);
}

int int_verify(int exp, int real)
{
  int sucess;
  if(exp == real){
	printf("%s%s%s",GREEN, SUC_MESS, RESET);
	sucess = 1;
  }
  else 
  {
	printf("%s%s%s",RED, ERR_MESS, RESET);
	sucess = 0;
  }
  return (sucess);
}

void test(char *name, char *cases, int (*f1)(), int (*f2)(), int (*test_func)())
{
	int i = 0;
	printf("\n%s:  ", name);
	while (cases[i] != '\0')
	{
		test_func(f1(cases[i]), f2(cases[i]));
		i++;
	}
}
