#include <stdio.h>

int main () {
  unsigned short int p1;

  scanf("%hd", &p1);
  printf("%hd %d\n", p1, sizeof(p1));

  return 0;
}

