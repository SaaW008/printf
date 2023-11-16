#include "main.h"

/**
 * printstr - handle printing of args of type string for printf
 * @c: string type
 * @ReturnValue: pointer to the return value of printf
 * Return: void
 */

void printstr(void *c, int *ReturnValue)
{
	char **str;

	str = (char **) c;
	while (**str != '\0')
	{
		printchar(*str, ReturnValue);
		*str += 1;
	}
}

/**
 * printStr - handle printing of args of type
 * string in upper case characters for printf
 * @c: string type
 * @ReturnValue: pointer to the return value of printf
 * Return: void
 */

void printStr(void *c, int *ReturnValue)
{
	char **str;
	char buffer;

	str = (char **) c;
	while (**str != '\0')
	{
		if ((**str > 0 && **str < 32) || (**str >= 127))
		{
			buffer = '\\';
			printchar(&buffer, ReturnValue);
			buffer = 'x';
			printchar(&buffer, ReturnValue);
		}
		else
		{
			printchar(*str, ReturnValue);
		}
		*str += 1;
	}
}
