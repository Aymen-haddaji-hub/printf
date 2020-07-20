#include "holberton.h"
/**
 * _printdigit - print any number
 * Return: void
 * @n: number
 */
void _printdigit(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	else
		n1 = n;
	if (n1 / 10)
		_printdigit(n1 / 10);
	_putchar(n1 % 10 + '0');
}
