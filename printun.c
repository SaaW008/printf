#include "main.h"

/**
 * printun - handle printing of int args for printf
 * @n: pointer to an int type
 * @ReturnValue: pointer to the return value of printf
 * Return: void
 */

void printun(void *n, int *ReturnValue)
{
	char arg;
	unsigned int arg2;
	unsigned int *arg3;

	arg3 = (unsigned int *) n;
	if (*arg3 < 10)
	{
		arg = '0' + *arg3;
		printchar(&arg, ReturnValue);
	}
	else
	{
		arg2 = *arg3 / 10;
		printint(&arg2, ReturnValue);
		arg = '0' + *arg3 % 10;
		printchar(&arg, ReturnValue);
	}
}
