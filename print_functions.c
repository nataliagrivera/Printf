#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *strlen
 *
 *
 */

int _strlen(char *s)
{
	int len;

	for(len = 0; s[len] != '\0'; len++);
	return(len);
}

/**
 *printchar - will print a given character
 *@c: character to print
 *Return success on 1. On error, return -1.
 */
int printchar(va_list args)
{
	char c = va_arg(args, int);
	int count = 0;

	write(1, &c, 1);
	count++;
	return (count);
}

/**
 *printstr - prints given string
 *@s: points to strings that will be printed
 *returns: length of string on success
 */
int printstr(va_list args)
{
	int len;
	char *s = va_arg(args, char *);

	if (s == NULL)
		return(0);
	len = _strlen(s);

	write(1, s, len);

	return(len);
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
	int len = sprintf(buffer, "%d", num);

	write(1, buffer, len);
	return (len);

}


