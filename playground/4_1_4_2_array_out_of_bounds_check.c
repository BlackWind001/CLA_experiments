#include <stdio.h>
/*
 * The description in 4.1.4.2 is for
 * initializing an array (i.e. assigning value during declaration).
 * However, this example is to check what happens when you
 * try to set a value at a specific index that is out of
 * bounds.
 *
 * Apparently, C does not provide any fail-safe against
 * accessing out of bounds elements and doing so results
 * in "undefined behaviour".
 *
 * We might get a random value, a zero or a segmentation fault
 * (if the program tries to access memory that is not owned by
 * it).
 *
 * Will be emulating this in the program.
 */
int main () {
  int arr[] = {0, 1, 2, 3, 4};

  arr[2*3] = 5;

  printf("%d", arr[2+3]); // prints zero on my machine.
  
  // trying to force a segmentation fault.
  for (int i = 0; i < 1024; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

