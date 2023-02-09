#include <stdio.h>

int main () {
  int a = 3 * 10;

  switch (30) {
    // The following produces an error that
    // the case label is not an integer constant.
    case a: printf("30");
  }
  return 0;
}
