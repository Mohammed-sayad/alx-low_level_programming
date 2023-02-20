#include <stdio.h>

/**
 * main - function
 * Desciption: base 16 in lowercase
 * Return: 0
*/

int main(void)
{
	int c;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}

