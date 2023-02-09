#include <stdio.h>

int main () {
  float a[5] = {0.1, 0.2};

  for (int i = 0; i < 5; i++) {
    printf("%.2f ", a[i]);
  }

  printf("\n");

  return 0;
}

