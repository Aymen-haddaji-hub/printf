#include "holberton.h"
/**
 * print_hexalower - unsigned int to hexadecimal converter.
 *@n: unsigned int.
 * Return: number times print
 */
int print_hexalower(unsigned int n)
{
	int i, j, rem, c = 0;
	unsigned int num_copy = n;
	char *hexadecimal;

	if (n == 0)
		return (_putchar('0'));
	while (num_copy != 0)
	{
		num_copy /= 16;
		c++;
	}
	hexadecimal = malloc(c);
	for (i = 0; n != 0; i++)
	{
		rem = 0;
		rem = n % 16;
		if (rem < 10)
		{
			hexadecimal[i] = rem + '0';
		}
		else
		{
			hexadecimal[i] = rem + 'W';
		}
		n /= 16;
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(hexadecimal[j]);
	free(hexadecimal);
	return (c);
}
