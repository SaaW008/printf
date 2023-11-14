#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printchar(const char *c);
int printstring(const char *c);
int _strlen(const char *s);
int printint(const int *n);

#endif
