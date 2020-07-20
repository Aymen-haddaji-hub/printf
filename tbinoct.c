#include <stdio.h>
#include "holberton.h"
/**
 * _tbinoct - Converts an usigned int to binary.
 * @n: Passed number.
 * @m: counter.
 * @sys: system
 * Return: Returns a binary converted number.
**/
int _tbinoct(unsigned int n, int m, unsigned int sys)
{
	if (n < sys)
	{
		_putchar(n + '0');
		return (1);
	}
	m = _tbinoct(n / sys, m + 1, sys) + 1;
	_putchar(n % sys + '0');
	return (m);
}
