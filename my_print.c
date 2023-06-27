#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: character string
 * Return: num
 */

int _printf(const char *format, ...)
{
	int num = 0, i = 0, d;
	char *s, c;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			c = (char)va_arg(args, int);
			_putchar(c);
			i += 2;
			num++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			s = va_arg(args, char*);
			while (*s != '\0')
			{
				_putchar(*s);
				num++;
				s++;
			}
			i += 2;
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			d = va_arg(args, int);
			_putchar(d / 10 + '0');
			_putchar(d % 10 + '0');
			num++;
			i += 2;
		}
		else if (format[i] == '%')
		{
			_putchar('%');
			num++;
			i++;
		}
		else
		{
			_putchar(format[i]);
			num++;
			i++;
		}
	}
	va_end(args);
	return (num);
}
