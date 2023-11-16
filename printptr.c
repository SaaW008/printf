#include "main.h"

/**
 * printptr - a function that print pointer to standard output
 * @n: pointer passed as pointer
 * @ReturnValue: lenth of output format
 */

void printptr(void *n, int *ReturnValue)
{
	int **arg1;
	char arg2;

	arg1 = (int **) n;
	arg2 = '0';
	printchar(&arg2, ReturnValue);
	arg2 = 'x';
	printchar(&arg2, ReturnValue);
	printLhex(arg1, ReturnValue);
}
