#include <stdio.h>

int main () {
  short int a;
  int b;
  long int c;
  long long int d;

  printf("%d %d %d %d", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
  return 0;
}

