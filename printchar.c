#include "main.h"

/**
 
printchar - print char
@c: pointer to char
@ReturnValue: pointer to the return value of printf
Return: void
*/

int printchar(const void *c, int)
{
        int rv;

        rv = write(1, c, 1);
        return (rv);
}