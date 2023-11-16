#include "main.h"


/* TODO: check Return alwayse 0 */
/**
 * _printf - prints the formated string format
 * @format: formated string
 * @...: variadic arguments
 * Return: alwayse 0
 */

int _printf(const char *format, ...)
{
	const char *opstart;
	va_list ap;
	int arg1, check, ReturnValue = 0;
	char *arg2;
	int *arg3;

	va_start(ap, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			opstart = ++format;
			check = 1;
			while (check)
			{
				switch (*format)
				{
				case 'c':
				{
					arg1 = va_arg(ap, int);
					handleArg(opstart, format, &printchar, &arg1, &ReturnValue);
					check = 0;
					break;
				}
				case '%':
				{
					arg1 = '%';
					handleArg(opstart, format, &printchar, &arg1, &ReturnValue);
					check = 0;
					break;
				}
				case 'd':
				{
					arg1 = va_arg(ap, int);
					handleArg(opstart, format, &printint, &arg1, &ReturnValue);
					check = 0;
					break;
				}
				case 'o':
				{
					arg1 = va_arg(ap, int);
					handleArg(opstart, format, &printoct, &arg1, &ReturnValue);
					check = 0;
					break;
				}
				case 'i':
				{
					arg1 = va_arg(ap, int);
					handleArg(opstart, format, &printint, &arg1, &ReturnValue);
					check = 0;
					break;
				}
				case 'x':
				{
					arg1 = va_arg(ap, int);
					handleArg(opstart, format, &printhex, &arg1, &ReturnValue);
					check = 0;
					break;
				}
				case 'X':
				{
					arg1 = va_arg(ap, int);
					handleArg(opstart, format, &printHex, &arg1, &ReturnValue);
					check = 0;
					break;
				}
				case 's':
				{
					arg2 = va_arg(ap, char *);
					handleArg(opstart, format, &printstr, &arg2, &ReturnValue);
					check = 0;
					break;
				}
				case 'S':
				{
					arg2 = va_arg(ap, char *);
					handleArg(opstart, format, &printStr, &arg2, &ReturnValue);
					check = 0;
					break;
				}
				case 'b':
				{
					arg1 = va_arg(ap, int);
					handleArg(opstart, format, &printbin, &arg1, &ReturnValue);
					check = 0;
					break;
				}
				case 'u':
				{
					arg1 = va_arg(ap, int);
					handleArg(opstart, format, &printun, &arg1, &ReturnValue);
					check = 0;
					break;
				}
				case 'p':
				{
					arg3 = va_arg(ap, int *);
					handleArg(opstart, format, &printptr, &arg3, &ReturnValue);
					check = 0;
					break;
				}
				}
				if (!checkKnown(format) && check)
				{
					arg1 = '%';
					printchar(&arg1, &ReturnValue);
					format = opstart;
					break;
				}
				format++;
			}
		}
		else
		{
			write(1, format, 1);
			format++;
			ReturnValue++;
		}
	}
	va_end(ap);
	return (ReturnValue);
}

/**
 * handleArg - handles the printing of arg and format options of printf
 * @options: the pointer to the start of format options
 * @format: pointer to the end of the format options (format character)
 * @printer: the adequate print function for arg
 * @arg: argument to be printed
 * @ReturnValue: pointer to the return value of printf
 * Return: void
 */
void handleArg(
	const char *options,
	const char *format,
	void (*printer)(void *arg, int *ReturnValue),
	void *arg,
	int *ReturnValue)
{
	char op[] = {'+', ' ', '#'};
	/* array of handler functions */
	void (*handlers[])(
		void (*printer)(void *arg, int *ReturnValue),
		void *arg,
		int *ReturnValue) = {&handlePlus, &handleSpace/*, &handleHash*/};
	int i;

	if (options < format)
	{
		for (i = 0; i < 3; i++)
		{
			if (containes(options, format, op[i]))
			{
				handlers[i](printer, arg, ReturnValue);
			}
		}
	}
	else
	{
		printer(arg, ReturnValue);
	}
}

/**
 * containes - check for a char in string buffer passed by pointer adresse
 * @start: pointer to the start
 * @end: pointer to the end
 * @c: argument to be printed
 * Return: 1 if success, 0 if non
 */

int containes(const char *start, const char *end, char c)
{
	const char *buffer = start;

	while (buffer < end)
	{
		if (*buffer == c)
		{
			return (1);
		}
		buffer++;
	}
	return (0);
}

/**
 * checkKnown - handles the printing of arg and format options of printf
 * @format: the pointer to the format specifier of _printf function
 * Return: 1 if success, 0 if non
 */

int checkKnown(const char *format)
{
	char known[] = {'+', '#', '-', ' ', '.'};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (*format == known[i])
		{
			return (1);
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (*format == '0' + i)
		{
			return (1);
		}
	}
	return (0);
}
