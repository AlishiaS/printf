#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

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


/**
 * print_octal - prints number in octal base
 * @o: list containing octal number to be printed
 *
 * Return: number of octals printed
 */
int print_octal(va_list o)
{
	unsigned int i;
	int  a, b;
	int arr[100];

	i = va_arg(o, unsigned int);
	a = 0;
	if (i == 0)
	{
		_putchar('0');
		return (1);
	}
	while (i != 0)
	{
		arr[a] = c % 8;
		i = i / 8;
		a++;
	}
	for (b = (i - 1); b >= 0; b--)
		_putchar(arr[b] + '0');
	return (a);
}
