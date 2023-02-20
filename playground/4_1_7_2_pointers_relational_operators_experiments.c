#include <stdio.h>

int main () {
  int arr[5], arr1[5], arr2[5];
  int *p, *q;

  arr1[3] = 1212;
  arr1[4] = 1111;

  arr[0] = 5678;
  arr[1] = 1234;

  printf("%d\n", arr1 + 3 > arr1 + 2);
  printf("%d\n", arr1 + 3 > arr2 + 2);

  for(int i = 0; i < 1000; i++) {
    printf("%d ",*(arr2 + i));
    if (*(arr2 + i) == 1234) {
      printf("\n");
      break;
    }
  }

  printf("%d %d %d\n", p == q, p < q, p > q);

  return 0;
}
