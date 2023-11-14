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
				ret += printchar((char *) va_arg(args, char));
				i += 2;
				break;
			}
			case '%':
			{
				ret += write(1, &opt, 1);
				i += 2;
				break;
			}
			case 's':
			{
				char *s_arg;
				s_arg = (va_arg(args, char *));
				ret += printstring(s_arg);
				i += 2;
				break;
			}
			case 'd':
			{
				int d_arg = (int) va_arg(args, int);

				ret = printint((int *) d_arg);
				i += 2;
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
			ret += write(1, &format[i], 1);
			i++;
		}
	}
	va_end(args);
	return (ret);
}
