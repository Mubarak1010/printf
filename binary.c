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
		_putchar(mod);
		value = value / 2;
		count++;
	}
	return (count);
}
