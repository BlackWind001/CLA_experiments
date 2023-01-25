#include <stdio.h>

/*
 * The following is an example of an
 * "implementation dependant issue".
 *
 * Here, we are trying to assign a value
 * that is out of range of a variable whose
 * type is short.
 *
 * Doing this can cause different behaviour in
 * different systems.
 *
 * In my current system, the value assigned to
 * a is -32536. It is kind of warping the value
 * to fit inside the range.
 *
 * In other systems, the value assigned could be
 * the max value available in the short range,
 * or the value could also be random. Few systems
 * might also throw an error.
 */


int main () {
  short a = 33000;
  printf("%d", a);
  return 0;
}
