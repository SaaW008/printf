#include "main.h"

int itostdo(int i);

/**
 * printint - print int
 * @n: pointer to int
 * Return: number of element printed
 */

int printint(const int *n)
{
	int i_ret = 0;
	int i = *n;
	char signe;

	if (i < 0)
	{
		signe = '-';
		i_ret += write(1, &signe, 1);
		i *= -1;
		printint((int *) i);
	}
	else if (i < 10)
	{
		i_ret = itostdo(i);
	}
	else if (i >= 10)
	{
		i_ret = itostdo(i);
	}
	return (i_ret);
}

/**
 * itostdo - print int to standard output stream
 * @i: int
 * Return: number of element printed
 */

int itostdo(int i)
{
	int itos_ret =0;
	char tmp;
	if( i > 9 )
	{
		int a;
		a = i / 10;

		i -= 10 * a;
		itostdo(a);
	}
	tmp = '0' + i;
	itos_ret = write(1, &tmp, 1);
	return (itos_ret);
}
