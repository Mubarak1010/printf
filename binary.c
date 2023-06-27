#include "main.h"

/**
 * binary_conversion - function that converts to base 2.
 * @value: number to be used.
 * Return: the count.
 */

int binary_conversion(int value)
{
	int mod, count = 0, i = 0;
	int array[1024];

	if (value == 0)
		_putchar(48);
	else
	{
		while (value != 0)
		{
			mod = value % 10;
			array[i] = mod;
			i++;
			count++;
			value /= 10;
		}
		while (i--)
		{
			if (array[i] == 0)
				_putchar(48);
			else
				_putchar(49);
		}
	}
	return (count);
}
