#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  *(p + 2) = 98; // Modify n within its allocated memory
  printf("a[2] = %d\n", a[2]); // This will print "a[2] = 98\n"
  return (0);
}

