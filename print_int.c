#include "main.h"

/**
 * printint - print int
 * @n: int to do
 * Return: number of element printed
 */
int print_int_proc(int i);

int printint(int i)
{
	int i_ret = 0;

	if (i == 0)
	{
		i_ret += write(1, "0", 1);
	}
	else
	{
		i_ret += print_int_proc(i);
	}
	return (i_ret - 1);
}

/**
 * write_digit - print digit
 * @n: int to write
 * Return: number of element printed
 */

int write_digit(int n)
{
	char digit = '0' + n;
	return (write(1, &digit, 1));
}

/**
 * print_int_proc - procedur of printing
 * @n: int to do
 * Return: number of element printed
 */

int print_int_proc(int i)
{
	int i_ret = 0;

	if (i < 0)
	{
		i = -i;
		i_ret += write(1, "-", 1);
	}
	if (i / 10 != 0)
	{
		i_ret += print_int_proc(i / 10);
	}
	i_ret += write_digit(i % 10);
	return (i_ret);
}
