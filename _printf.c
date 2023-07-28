#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - Outputs print text and variables according to format
 * @format: string which provides the format to the main file serving as input
 * Return: prints depending on format specifier that applie
 */
int _printf(const char *format, ...)
{
	char a = 0;
	int count = 0;
	char p = '%';
	int found = 0;

	va_list args;

	va_start(args, format);

	while ((a = *format) != '\0')
	{
		if (a == '%')
		{
			format++;
			if (*format == 'c')
			{
				count += printchar(args);
			}
			else if (*format == 's')
			{
				count += printstr(args);
			}
			else if (*format == '%')
			{
				write(1, &p, 1);
				count++;
			}
			else if (*format == 'd' || *format == 'i')
			{
			count += printint(args);
			}
			else if (!found)
			{
			count += write(1, "%r", 2);
			}
		}
		else
		{
			write(1, &a, 1);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}

