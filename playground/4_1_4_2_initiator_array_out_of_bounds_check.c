#include <stdio.h>

/*
 * The purpose of this program is to check
 * what error pops up when you assign more elements
 * in the initiator compared to the declared number.
 *
 * Result: It does not throw an error. Just a warning.
 * Trying to print the value gives me a random number.
 */

int main () {
  int a[1] = {0, 1};

  printf("%d\n", a[1]);

  return 0;
}

