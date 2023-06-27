#include <stdarg.h>
#include "main.h"

/**
 * _printf - function that produces output according to a format.
 * @format: character string
 * Return: num
 */

int _printf(const char *format, ...)
{
	int num = 0, i = 0, mod, j, number[1024];
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
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			num++;
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] == 'd')
		{
			value = va_arg(args, int);
			if (value == 0)
				_putchar('0');
			else
			{
				while (value != 0)
				{
					mod = value % 10;
					num[j] = mod;
					j++;
					value /= 10;
				}
				while (j--)
				{
					print(num[j]);
					num++;
				}
			}
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
