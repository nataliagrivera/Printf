#include "main.h"
#include <stdarg.h>
#include <stdio.h>

FormatHandler formatHandlers[] = {
	{'c', printchar}
	{'s', printstr}
	{'d', printint}
	{'i', printint}
	{'\0', NULL}
};

int _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	char a = 0;

	const char *format = va_arg(args, const char*);

while((a = *format) != '\0')
	{
		if (a == '%')
		{
			format++;
			if(*format == 'c')
			{
				printchar(va_arg(args, int));
			}
				else if (*format == 's')
				{
				fputs(va_arg(args, const char *), stdout);
				}
				else if(*format == '%')
				{
				printchar('%');
				}
		}
		else
		{
			printchar(a);
		}
		format++;
	}
	va_end(args);
}

