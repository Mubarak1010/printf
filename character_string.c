#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: character string
 * Return: num
 */

int _printf(const char *format, ...)
{
	int num = 0;
	char c, *s;
	va_list args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = (char)va_arg(args, int);
				_putchar(c);
				num++;
			}
			else if (*format == 's')
			{
				s = va_arg(args, char*);
				while (*s != '\0')
				{
					_putchar(*s);
					num++;
					s++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				num++;
			}
		}
		else
		{
			_putchar(*format);
			num++;
		}
		format++;
	}
	va_end(args);
	return (num);
}
