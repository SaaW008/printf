#include "main.h"

/**
 * handlePlusAndSpace - to handle the '+' symbol, and ' ' space symbol
 *@printer: pointer to the function printer and his arguments
 *@arg: pointer to the first argument
 *@ReturnValue: pointer to the return value for conter
 *@c: buffer
 */

void handlePlusAndSpace(
	void (*printer)(void *arg, int *ReturnValue),
	void *arg,
	int *ReturnValue,
	char c)
{
	int *buffer;
	char buffer2 = c;

	buffer = (int *) arg;
	if (*buffer > 0)
	{
		printchar(&buffer2, ReturnValue);
		printer(arg, ReturnValue);
	}
	else
	{
		printer(arg, ReturnValue);
	}
}


/**
 * handlePlus - to handle the '+' plus symbol
 *@printer: pointer to the function printer and his arguments
 *@arg: pointer to the first argument
 *@ReturnValue: pointer to the return value for conter
 */

void handlePlus(
	void (*printer)(void *arg, int *ReturnValue),
	void *arg,
	int *ReturnValue)
{
	handlePlusAndSpace(printer, arg, ReturnValue, '+');
}

/**
 * handlePlusAndSpace - to handle the ' ' space symbol
 *@printer: pointer to the function printer and his arguments
 *@arg: pointer to the first argument
 *@ReturnValue: pointer to the return value for conter
 */


void handleSpace(
	void (*printer)(void *arg, int *ReturnValue),
	void *arg,
	int *ReturnValue)
{
	handlePlusAndSpace(printer, arg, ReturnValue, ' ');
}
