#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: character string
 * Return: num
 */

int _printf(const char *format, ...)
{
	int num = 0, i = 0, j = 0;
	char c;
	char *s;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = (char)va_arg(args, int);
				_putchar(c);
				num++;
			}
			else if (format[i] == 's')
			{
				s = va_arg(args, char*);
				while (s[j] != '\0')
				{
					_putchar(s[j]);
					num++;
					j++;
				}
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				num++;
			}
		}
		else
		{
			_putchar(format[i]);
			num++;
		}
		i++;
	}
	va_end(args);
	return (num);
}
