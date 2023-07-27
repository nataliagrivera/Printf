#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *strlen
 *
 *
 */

int strlen(va_list args)
{
int len;

for(len = 0; s[len] != '\0'; len++)
	printchar(s[len]);
return(0);
}

/**
 *printchar - will print a given character
 *@c: character to print
 *Return success on 1. On error, return -1.
 */
int printchar(va_list args)
{
	char c = va_arg(args, int);
	return write(1, &c, 1);
}

/**
 *printstr - prints given string
 *@s: points to strings that will be printed
 *returns: length of string on success
 */
int printstr(va_list args)
{
	int len;

	(s = NULL);
		return(0);

	write(1, s, strlen(s));

	len = strlen(s);
	return(write(1, s, len));
}
/**
 *printint - print integers
 *
 *
 */
int printint(va_list args)
{

int num = va_arg(args, int);
char buffer[20];
int len= printf(buffer, "%d", num);

return write(1, buffer, len);

}
