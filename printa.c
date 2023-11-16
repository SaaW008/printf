#include "main.h"
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list args;
	int ret = 0, i = 0;
	char opt;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			opt = format[i + 1];
			switch (opt)
			{
			case 'c':
			{
				printchar(va_arg(args, int *), &ret);
				i += 2;
				break;
			}
			case '%':
			{
				write(1, &opt, 1);
				i += 2;
				ret++;
				break;
			}
			case 's':
			{
				char *str;
				str = (va_arg(args, char *));
				printstring(str, ret);
				i += 2;
				break;
			}
			case 'd':
			{
				int d_ret = 0;
				int d_arg = (int) va_arg(args, int *);
				printint(d_arg);
				i =+ 2;
				break;
			}
			case 'i':
			{
				i += 2;
				break;
			}
			}
		}
		else
		{
			write(1, &format[i], 1);
			i++;
			ret++;
		}
	}
	va_end(args);
	return (ret);
}
