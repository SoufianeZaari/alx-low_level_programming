#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
char first ='a', last= 'f' ,n;
for(i=0; i<10; i++)
{
putchar('0' + i);
}
for(n=first; n<=last; n++)
{
putchar(n);
}
putchar('\n');
return 0;
}
