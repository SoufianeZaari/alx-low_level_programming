#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
printf("Enter an integer:\n ");
scanf("%d", &n);
if (n > 0)
{
printf("%d is positive", n);
}
else if (n == 0)
{
printf("%d is zero", n);
}
else (n < 0)
{
printf("%d is negative", n);
}
return (0);
}
