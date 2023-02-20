/*
 * How do char array declarations differ from
 * those of char pointers?
 * Especially in case of string literals being assinged
 * during declaration.
 *
 * Supppose I declare a char array:
 *      char c_arr[] = "Potter";
 * then, when I try to print the value at (c_arr + 1),
 * I expect that 'o' will be printed.
 * What if I do the same with char pointer:
 *      char *c_ptr = "Potter";
 * If I now print the value at (c_ptr + 1), will I
 * still get an 'o'?
 */

#include <stdio.h>

int main () {
  char c_arr[] = "Potter";
  char *c_ptr = "Potter";

  printf("*(c_arr + 1): %d\n*(c_ptr + 1): %d\n\n", *(c_arr + 1), *(c_ptr + 1));
  printf("sizeof(c_arr): %d\nsizeof(c_ptr): %d\n\n", sizeof(c_arr), sizeof(c_ptr));

  c_ptr = "Albus Dumbeldore";

  printf("The following line will crash the program");
  printf(" since strings created using char pointers cannot be modified.\n");
  *(c_ptr + 3) = 'i';

  printf("New c_ptr: %s\nNew sizeof(c_ptr):%d\n", c_ptr, sizeof(c_ptr));

  return 0;
}

