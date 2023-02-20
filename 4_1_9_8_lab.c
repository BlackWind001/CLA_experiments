#include <stdio.h>

int main () {
  char input[20];
  char *iterable, temp;
  char *dot_positions[3];
  unsigned short no_dots = 0, no_chars_since_dot = 0, is_valid = 1;

  scanf("%s", input);

  // check if the string has 3 dots
  // check if there are at most 3 digits between every dot.
  iterable = input;
  while (*iterable != '\0') {
    temp = *iterable;

    // printf("Character: %c no_chars_since_dot: %d no_dots: %d\n", temp, no_chars_since_dot, no_dots);

    if (temp == '.') {
      no_chars_since_dot = 0;
      no_dots++;

      if (no_dots > 3) {
        is_valid = 0;
        break;
      }
      dot_positions[no_dots-1] = iterable;
    }
    else {
      no_chars_since_dot++;
      // check if the no of characters since last
      // dot has exceeded 3.
      // check if the character is a digit

      if (no_chars_since_dot > 3 || !(temp >= '0' && temp <= '9')) {
        is_valid = 0;
        break;
      }
    }

    iterable++;

  }

  if (!is_valid) {
    printf("Error: not a valid address.");
    return 1;
  }


  for(int i = 0; i < 3; i++) {
    iterable = dot_positions[i] + 1;
    printf("Last %d parts: %s \n", 3 - i, iterable);
  }

  return 0;
}

