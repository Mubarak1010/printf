#include "main.h"

/**
 * binary_conversion - print int in binry
 * @value: value
 * Return: binary value
 */

int binary_conversion(int value)
{
	int mod, count = 0, i = 0;
	int number[1024];

	if (value == 0)
		_putchar(48);
	else
	{
		while (value != 0)
		{
			mod = value % 2;
			number[i] = mod;
			i++;
			count++;
			value /= 2;
		}
		while (i--)
		{
			if (number[i] == 0)
				_putchar(48);
			else
				_putchar(49);
		}
	}
	return (count);
}
