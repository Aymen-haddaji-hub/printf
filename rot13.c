#include "holberton.h"

/**
 * *rot13 - ROT13 encoder.
 * @s: selected string.
 * Return: encoded value.
 */
int rot13(char *s)
{
	int i, j, count = 0;
	char first[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char second[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (s[i] != 0)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			for (j = 0; j < 52; j++)
			{
				if (s[i] == first[j])
				{
					count += _putchar(second[j]);
				}
			}
		} else
			count += _putchar(s[i]);
		i++;
	}
	return (count);
}
