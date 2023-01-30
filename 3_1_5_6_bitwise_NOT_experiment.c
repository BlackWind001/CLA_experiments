#include <stdio.h>

/**
 * Read up about converting from two's complement
 * to decimal here: https://math.stackexchange.com/questions/285459/how-can-i-convert-2s-complement-to-decimal
 */
int main () {
  int i = 15;
  printf("%d %u", ~i, ~i);
}
