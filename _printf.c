#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>
#define MAX_BUF 512
/**
 * _printf - main function
 *
 * @format: parameter
 * Return: int
 */
int _printf(const char *format, ...)
{
int i = 0;
va_list vl;
char *buf;
if (!format)
return (-1);
if (format[i] == '%')
return (-1);
buf = malloc(512);
if (!buf)
return (-1);
va_start(vl, format);
int x;
x = get_formater(buf, format, vl);
while (*buf)
{
write(*buf);
buf++;
}
va_end(vl);
free(buf);
return (x);
}
