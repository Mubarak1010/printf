#include <stdarg.h>
#include "main.h"

/**
 * my_print - Handles i and d conversion specifiers
 * @format: character string
 * Return: void
 */

void my_print(const char *format, ...)
{
	int d, i = 0;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			d = va_arg(args, int);
			_putchar(d / 10 + '0');
			_putchar(d % 10 + '0');
			format += 2;
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}

	va_end(args);
}
