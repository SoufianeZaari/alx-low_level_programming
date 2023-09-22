#include "main.h"
#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  *(p + 2) = 98;  // Modifier n en utilisant l'arithmétique des pointeurs
  printf("a[2] = %d\n", a[2]); // Cela affichera "a[2] = 98\n"
  return (0);
}

