#include <unistd.h>
#include "main.h"

/**
 * print - prints numbers one by one
 * @i: the munber
 * Return: number
 */

int print(int i)
{
	return (write(1, &i, 1));
}
