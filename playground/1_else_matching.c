#include <stdio.h>

/*
 * THIS CODE DOES NOT COMPILE!!!!!!
 * This was done on purpose.
 *
 * The following was code was an experiment around one
 * of the statements mentioned in the course.
 *
 * The statement was that:
 * "every else refers to the closest former if which did not match any other else"
 *
 * Based on this, I wanted to check if an else statement would match with an
 * if statement even if there was another statement in between that was not
 * part of the conditional.
 *
 * In our case, that "another statement" is
 *   printf("This is a normal statement");
 *
 * Obviously parsers are smart enough to know when the conditional statements
 * have already ended which is why this program does not compile.
 *
 * Lesson number: 3.1.1.3
 * Link to lesson: https://edube.org/learn/c-essentials-part-1/the-if-else-if-statement
*/

int main () {
  if (0)
    printf("This is the if statement");

  printf("This is a normal statement");

  else
    printf("This is the else statement");
  return 0;
}

/*
 * Although the above experiment did not compile,
 * there are problems with if-else matching.
 *
 * Do check about the "Dangling else" problem.
 * Here is a link to the dangling else problem with a C code snippet:
 * https://en.wikipedia.org/wiki/Dangling_else#C
 */
