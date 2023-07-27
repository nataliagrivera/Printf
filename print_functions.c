#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *_strlen - ...
 *@s: ...
 *Return: lenght
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; s[len] != '\0';)
		len++;
	return (len);
}

/**
 *printchar - will print a given character
 *@args: character to print
 *Return: ...
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
 *@args: points to strings that will be printed
 *Return: length of string on success
 */
int printstr(va_list args)
{
	int len;
	char *s = va_arg(args, char *);

	if (s == NULL)
		return (0);
	len = _strlen(s);

	write(1, s, len);

	return (len);
}

/**
 *printint - print integers
 *@args: ...
 *Return: lenght
 */
int printint(va_list args)
{

	int num = va_arg(args, int);
	char buffer[20];
	int len = sprintf(buffer, "%d", num);

	write(1, buffer, len);
	return (len);

}


