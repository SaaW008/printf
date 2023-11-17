#include "main.h"

/**
 
printchar - handle printing of char args for printf
@c: pointer to an char type
@ReturnValue: pointer to the return value of printf
Return: void
*/

void printchar(void *c, int *returnValue)
{
        write(1, c, 1);
        *ReturnValue += 1;
}
