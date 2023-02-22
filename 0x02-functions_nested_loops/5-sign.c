#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: parameter to be printed
 *
 * Return: 1 if it is gretaer than 0
 * 0 if it is 0
 * and -1 if less than 0
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}

	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
