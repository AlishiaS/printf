#include "main.h"
/**
 * _printf - sends a formatted string to the standard output.
 * @format: is a character string
 * Return: the number of characters printed,
 *	else -1.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int n;

	if (!format)
		return (-1);

	va_start (ap, format);
	n = _vprintf(format, ap);
	va_end(ap);

	return (n);
}
