#include <stdio.h>

/*
 * Running the following code will result in a warning but that is fine.
 *
 * The objective of this program was to demonstrate how long values are
 * recognized by the compiler when a number is followed by l or L.
 *
 * long literals are recognized by the letter l/L.
 * long long literals are recognized by the letter ll/LL.
 *
 * The other objective of this program was to demonstrate how if we don't use
 * the proper specifier in printf, we can get unexpected results.
 *
 * In printf, try replacing %lld with %d. The value that is printed will be
 * very different.
 */

int main () {
  long long a = 1E10;
  int b = a;
  int c = 300LL; // The LL at the end of the literal can be used to specify that this is a long long value.

  printf("%lld %d %d", a, b, c);
  printf("\n%d", sizeof(300ll));
  return 0;
}
