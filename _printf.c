#include "main.h"
#include <stdarg.h>
#include <stdio.h>

FormatHandler formatHandlers[] = {
	{'c', printchar},
	{'s', printstr},
	{'d', printint},
	{'i', printint},
	{'\0', NULL}
};

int _printf(const char *format, ...)
{
	char a = 0;
	int count = 0;
	char p = '%';
	va_list args;
	va_start(args, format);

	while((a = *format) != '\0')
	{
		if (a == '%')
		{
			format++;
			if(*format == 'c')
			{
				count += printchar(args);

			}
			else if (*format == 's')
			{
				count += printstr(args);
			}
			else if(*format == '%')
			{
				write(1, &p, 1);
				count++;
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

