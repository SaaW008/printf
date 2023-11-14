#include "main.h"

/**
 * printstring - print string
 * @c: pointer to string
 * Return: number of element printed
 */

int printstring(const char *c)
{
<<<<<<< HEAD
        int s_len = _strlen((char *)c);
        write(1, c, s_len);
        return (s_len);
=======
	int s_len = _strlen((char *)c);
	write(1, c, s_len);
	return (s_len);
>>>>>>> master
}

/**
 * _strlen - return the lenght of a string
 * @s: adress of string variable
 * Return: lenght of srting, 0 if no char exist
 */

int _strlen(const char *s)
{
<<<<<<< HEAD
        int i;

        i = 0;

        while (s[i] != '\0')
        {
           i++;
        }

        return (i);
=======
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
>>>>>>> master
}
