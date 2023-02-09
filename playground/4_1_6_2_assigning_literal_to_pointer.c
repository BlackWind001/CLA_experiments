#include <stdio.h>

int main () {

  printf("This is the start of the program\n");

  int *p;

  /*
   * If the value of the assignment is
   * out of scope of the current program,
   * then the 2nd printf statement does not
   * print anything. It does not even show
   * an error.
   *
   * For me, at the time of this writing, the
   * literal below seems to have been in the
   * scope of the program and hence the second
   * printf statement resulted in:
   *  This is the value 0
   */

  p = 1296000;

  printf("This is the value %d", *p);

  return 0;
}

