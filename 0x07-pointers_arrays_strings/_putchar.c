#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
<<<<<<< HEAD
int _putchar (char c)
=======
int _putchar(char c)
>>>>>>> 2bd5aeeeb5a38a6e4a925eeb585c93894a77828f
{
	return (write(1, &c, 1));
}
