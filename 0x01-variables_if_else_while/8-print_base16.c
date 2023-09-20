#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char first = 'a', last = 'f', n;
for (i = 0; i < 10; i++)
{
putchar('0' + i);
}
for (n = first; n <= last; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
