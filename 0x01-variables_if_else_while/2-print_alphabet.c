#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main()
{
    char first='a',last='z',i;
    for (i=first; i<=last; i++)
    {
        putchar(i); // Display the current character

    }
     putchar('\n');
    return 0;
}

