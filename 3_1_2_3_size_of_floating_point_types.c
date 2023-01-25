#include <stdio.h>

int main () {
  float a;
  // long float b; -> Apparently this type does not exist
  double c;
  // long long float d; -> long and float cannot be used together from what I understand.
  long double e;
  // long long double f; -> This type also does not exist.

  printf("%d %d %d\n", sizeof(a), sizeof(c), sizeof(e));
  return 0;
}
