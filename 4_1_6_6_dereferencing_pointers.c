#include <stdio.h>

int main () {
  int ivar = 2, *ptr = &ivar;

  *ptr = 4;

  printf("%d %d", ivar, *ptr);

  return 0;
}
