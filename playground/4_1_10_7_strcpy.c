#include <stdio.h>
#include <string.h>

int main () {
  char destination[50];

  // You could use null_destination without initializing
  // it with the value NULL. However, the initial value of
  // pointers could be some junk. Instead, it is always
  // advised to initialize the pointer to NULL and
  // allocate the required memory to them.
  char *null_destination = NULL;
  char *source = "Computer";

  strcpy(destination, source);
  printf("%s\n", destination);

  printf("%d\n", strlen(destination));

  /*
   * This piece of code causes the program to
   * crash since we are copying only the first
   * 4 characters of the source into the destination.
   * The function strncpy does not include the null
   * character if it is not within the n number of
   * characters being copied.
   */
  //Resetting destination
  for (int i=0; i<strlen(destination)+1; i++) {
    destination[i] = 'a';
  }
  strncpy(destination, source, 4);
  printf("%s\n", destination);

  /*
   * The following lines of code were
   * written specifically to cause the
   * program to crash.
   */
  // printf("%p ", null_destination);
  // strcpy(null_destination, source);
  // printf("%s %p\n", null_destination, null_destination);


  return 0;
}

