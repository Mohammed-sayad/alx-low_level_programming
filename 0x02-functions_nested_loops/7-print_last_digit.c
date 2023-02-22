#include "main.h"

/**
 * print_last_digit - Function
 * Description: get the last value of number
 * @d: the giving value
 * Return: the value.
 */
int print_last_digit(int d)
{
	int l;

	l = d % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
