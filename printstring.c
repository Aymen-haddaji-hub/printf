
#include "holberton.h"

/**
 * _printstring - prints a string in reverse.
 * @s: is a pointer to a char array
 * Return: Returns the transformed pointer
**/

void _printstring(char *s)
{

if (*s == 0)
	return;

s++;
_printstring(s);
s--;
_putchar(*s);

}
