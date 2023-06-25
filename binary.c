#include "main.h"

/**
 * binary_conversion - function that converts to base 2.
 * @value: number to be used.
 * Return: the count.
 */

int binary_conversion(int value)
{
	int mod, count;

	while (value != 0)
	{
		mod = value % 2;
		if (mod == 48)
			_putchar(48);
		else if (mod == 49)
			_putchar(49);
		value = value / 2;
		count++;
	}
	return (count);
}
