#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_int - prints an integer
 * @i: argument
 * Return: 0
 */
int print_int(va_list i)
{
	int num, *c;

	c = malloc(sizeof(*count));

	if (!c)
		return (-1);

	*c = 0;
	num = va_arg(i, int);
	*c = _print_int(num, c);

	return (*c);
}

/**
 * print_string - print a string
 * @s: the object to be printed
 * Return: the length of the string
 */
int print_string(va_list s)
{
	int c = 0;
	char *b = va_arg(s, char *);

	if (!b)
		b = "(null)";

	while (*b)
		c += _putchar(*b++);

	return (c);
}


/**
 * print_char - prints a character
 * @c: the object to be printed
 * Return: 1 on Success, else -1
 */
int print_char(va_list c)
{
	return (_putchar(va_arg(c, int)));
}


/**
 * print_unsig - prints an unsigned int.
 * @u: argument
 * Return: 0
 */
int print_unsig(va_list u)
{
	int d = 1, i, r;
	unsigned int n = va_arg(u, unsigned int);

	for (i = 0; n / d > 9; i++, d *= 10)
		;

	for (; divisor >= 1; n %= d, d /= 10)
	{
		r = n / d;
		_putchar('0' + r);
	}
	return (i + 1);
}
