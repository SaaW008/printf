#include "main.h"

/**
 * printhex - handle printing of int args in hex format for printf
 * @n: pointer to an int type
 * @ReturnValue: pointer to the return value of printf
 * Return: void
 */

void printhex(void *n, int *ReturnValue)
{
	char arg;
	unsigned int arg2;
	unsigned int *arg3;
	char arr[] = {'f', 'e', 'd', 'c', 'b', 'a'};

	arg3 = (unsigned int *) n;
	if (*arg3 < 10)
	{
		arg = '0' + *arg3;
		printchar(&arg, ReturnValue);
	}
	else if (*arg3 < 16)
	{
		arg = arr[15 - *arg3];
		printchar(&arg, ReturnValue);
	}
	else
	{
		arg2 = *arg3 / 16;
		printhex(&arg2, ReturnValue);
		arg2 = *arg3 % 16;
		printhex(&arg2, ReturnValue);
	}
}

/**
 * printLhex - handle printing of int args in long hex format for printf
 * @n: pointer to an int type
 * @ReturnValue: pointer to the return value of printf
 * Return: void
 */

void printLhex(void *n, int *ReturnValue)
{
	char arg;
	unsigned long arg2;
	unsigned long *arg3;
	char arr[] = {'f', 'e', 'd', 'c', 'b', 'a'};

	arg3 = (unsigned long *) n;
	if (*arg3 < 10)
	{
		arg = '0' + *arg3;
		printchar(&arg, ReturnValue);
	}
	else if (*arg3 < 16)
	{
		arg = arr[15 - *arg3];
		printchar(&arg, ReturnValue);
	}
	else
	{
		arg2 = *arg3 / 16;
		printLhex(&arg2, ReturnValue);
		arg2 = *arg3 % 16;
		printLhex(&arg2, ReturnValue);
	}
}

/**
 * printHex - handle printing of int args in hex format
 * and upper case characters for printf
 * @n: pointer to an int type
 * @ReturnValue: pointer to the return value of printf
 * Return: void
 */

void printHex(void *n, int *ReturnValue)
{
	char arg;
	unsigned int arg2;
	unsigned int *arg3;
	char arr[] = {'F', 'E', 'D', 'C', 'B', 'A'};

	arg3 = (unsigned int *) n;
	if (*arg3 < 10)
	{
		arg = '0' + *arg3;
		printchar(&arg, ReturnValue);
	}
	else if (*arg3 < 16)
	{
		arg = arr[15 - *arg3];
		printchar(&arg, ReturnValue);
	}
	else
	{
		arg2 = *arg3 / 16;
		printHex(&arg2, ReturnValue);
		arg2 = *arg3 % 16;
		printHex(&arg2, ReturnValue);
	}
}

/**
 * printLHex - handle printing of int args in long hex format
 * and upper case characters for printf
 * @n: pointer to an int type
 * @ReturnValue: pointer to the return value of printf
 * Return: void
 */

void printLHex(void *n, int *ReturnValue)
{
	char arg;
	unsigned long arg2;
	unsigned long *arg3;
	char arr[] = {'F', 'E', 'D', 'C', 'B', 'A'};

	arg3 = (unsigned long *) n;
	if (*arg3 < 10)
	{
		arg = '0' + *arg3;
		printchar(&arg, ReturnValue);
	}
	else if (*arg3 < 16)
	{
		arg = arr[15 - *arg3];
		printchar(&arg, ReturnValue);
	}
	else
	{
		arg2 = *arg3 / 16;
		printLHex(&arg2, ReturnValue);
		arg2 = *arg3 % 16;
		printLHex(&arg2, ReturnValue);
	}

}
