#include <stdio.h>

int main(void)
{
char first = 'a', last = 'z', i;
for (i = first; i <= last; i++)
{
putchar(i); /* Display the current character */
}
putchar('\n');
return 0;
}
