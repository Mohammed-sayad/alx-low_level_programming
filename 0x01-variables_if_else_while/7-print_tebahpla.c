#include <stdio.h>

/**
 * main - function
 * Description: write a - z in reverse
 * Return: 0
*/

int main(void)
{
	int a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
