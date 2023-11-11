#include "main.h"

/**
 * _printf - prints the formated strings to standard output
 * @format: formated string to handle
 * @...: variadic arguments for format specifier
 * Return: length of *format
 */

int _printf(const char *format, ...)
{
	unsigned int str_len = 0;

	while (format[str_len] != '\0')
	{
		str_len++;
	}
	return (str_len);
}
