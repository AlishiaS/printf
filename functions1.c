#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdarg>

/**
 * print_rev - prints a string in reverse
 * @r: argument from _printf
 * Return: length of the printed string
 */
int print_rev(va_list r)
{
	int i = 0;
	int j;
	char *s = va_arg(r, char *);

	if (!s)
	{
		return (-1);
	}

	while (s[i])
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	return (i);
}

/**
 * print_octal - prints number in octal base.
 * @0: list containing octal number to be printed
 * Return: number of octals printed
 */
int print_octal(va_list o)
{
	unsigned va_list num = va_arg(0, unsigned int);
	unsigned int cpy;
	char *oct;
	va_list i, j, charP = 0;

	if (num == 0)
		return (_putchar('0'));

	for (cpy = num; cpy != 0; j++)
	{
		cpy = cpy / 8;
	}

	*oct = malloc(j);
	if (!oct)
		return (-1);

	for (i = j - 1; i >= 0; i--)
	{
		oct[i] = num % 8 + '0';
		num = num / 8;
	}

	for (i = 0; i < j && oct[i] == '0'; i++)
		;

	for (; i < j; i++)
	{
		_putchar(oct[i]);
		charP++;
	}
	free(*oct);
	return (charP);
}



/**
 * print_rot13 - prints a string using rot13
 * @R: list of arguments from _printf
 * Return: length of the printed string
 */
int print_rot13(va_list R)
{
	register short i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ALPHA[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(R, char *);

	if (!s)
	{
		return (-1);
	}

	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);

		else
		{
			for (i = 0; i <= 52; i++)
				if (s[j] == alpha[i])
					_putchar(ALPHA[i]);
		}
	}
	return (j);
}

















