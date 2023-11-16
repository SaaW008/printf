#include "main.h"

/**
 * printoct - handle printing of int args in octal formate for printf
 * @n: pointer to an int type
 * @ReturnValue: pointer to the return value of printf
 * Return: void
 */
void printoct(void *n, int *ReturnValue)
{
	char arg;
	unsigned int arg2;
	unsigned int *arg3;

	arg3 = (unsigned int *) n;
	if (*arg3 < 8)
	{
		arg = '0' + *arg3;
		printchar(&arg, ReturnValue);
	}
	else
	{
		arg2 = *arg3 / 8;
		printoct(&arg2, ReturnValue);
		arg = '0' + *arg3 % 8;
		printchar(&arg, ReturnValue);
	}
}
