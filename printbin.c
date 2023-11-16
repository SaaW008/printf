#include "main.h"

/**
 * printbin - handle printing of int args in binary format for printf
 * @n: pointer to an int type
 * @ReturnValue: pointer to the return value of printf
 * Return: void
 */
void printbin(void *n, int *ReturnValue)
{
	char arg;
	unsigned int mask = 1;
	unsigned int *arg3;

	arg3 = (unsigned int *) n;
	if (*arg3)
	{
		if (*arg3 & mask)
		{
			*arg3 = *arg3 >> 1;
			printbin(arg3, ReturnValue);
			arg = '1';
			printchar(&arg, ReturnValue);
		}
		else
		{
			*arg3 = *arg3 >> 1;
			printbin(arg3, ReturnValue);
			arg = '0';
			printchar(&arg, ReturnValue);
		}
	}
}
