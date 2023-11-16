#include "main.h"

/**
 * printint - handle printing of int args for printf
 * @n: pointer to an int type
 * @ReturnValue: pointer to the return value of printf
 * Return: void
 */

void printint(void *n, int *ReturnValue)
{
	char arg;
	int arg2;
	int *arg3;

	arg3 = (int *) n;
	if (*arg3 < 0)
	{
		arg = '-';
		printchar(&arg, ReturnValue);
		*arg3 *= -1;
		printint(arg3, ReturnValue);
	}
	else if (*arg3 < 10)
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
