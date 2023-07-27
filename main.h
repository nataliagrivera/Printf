#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
/**
 *struct FormatHandler- variable structure
 *@specifier: ...
 *@handler: ...
 */
typedef struct FormatHandler
{
char specifier;
int (*handler)(va_list);
} FormatHandler;

int _printf(const char *format, ...);
int _strlen(char *s);
int printchar(va_list args);
int printstr(va_list args);
int printint(va_list args);


#endif
