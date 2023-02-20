/*
 * This version of the solution is meant to have
 * better clarity around the problem statement and the
 * required solution.
 *
 * Although 4_1_9_8_lab.c was a working solution,
 * I think it lacks clarity and the code itself
 * seems confusing.
 *
 * This solution is not meant to be faster or more
 * performative by any means. It is however, meant
 * to be clearer in terms of my thought process.
 */
#include <stdio.h>

int main () {
  char input[20];
  char *iterable;
  char *dot_positions[3];
  char temp;
  unsigned short no_dots = 0,
                 is_valid = 1,
                 no_digits_in_subset;

  scanf("%s", input);

  // Check for the number of dots
  iterable = input;
  temp = *iterable;
  while (temp != '\0') {

    if (temp == '.') {
      no_dots++;
      if (no_dots > 3) {
        is_valid = 0;
        break;
      }
    }

    temp = *(++iterable);
  }

  // Only execute this if the number of
  // dots is 3.
  if (is_valid) {
    // check that all characters other than
    // the dots and the nul character are
    // digits.
    
    no_digits_in_subset = 0;
    no_dots = 0;
    iterable = input;
    temp = *iterable;
    while (temp != '\0') {
      if (temp == '.') {
        // Invalid if the number of digits in the
        // subset is less than 1.
        if (no_digits_in_subset < 1) {
          is_valid = 0;
          break;
        }
        no_digits_in_subset = 0;
        dot_positions[no_dots++] = iterable;
      }
      else {
        // Invalid if the character is not a number
        if (!(temp >= '0' && temp <= '9')) {
          is_valid = 0;
          break;
        }
        no_digits_in_subset++;

        // Invalid if there are more than 3 digits
        if (no_digits_in_subset > 3) {
          is_valid = 0;
          break;
        }
      }
      temp = *(++iterable);
    }

  }

  // Handles all the invalid cases
  if (!is_valid) {
    printf("Error: not a valid address.");
    return 1;
  }

  for(int i=0; i<3; i++) {
    printf("%s\n", dot_positions[i]+1);
  }

  return 0;
}

