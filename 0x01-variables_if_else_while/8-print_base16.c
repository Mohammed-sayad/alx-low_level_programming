#include <stdio.h>
/**
* main - runs the program
* Description: loop on chars and concat them
* Return: 0
*/
int main(void)
{
int n;
int c;
for ( n = 48; n <= 56; n++)
{
putchar(n);
}
for ( c = 97; c <= 102; c++)
{
putchar(c);
} 
putchar('\n');   
return (0);
}
