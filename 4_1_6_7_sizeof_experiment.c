#include <stdio.h>

int main () {

  char single_character_variable = 'c';

  int int_arr[] = {1, 2, 3, 4, 5};
  char char_arr[5];

  char *char_pointer;
  int *int_pointer;
  float *float_pointer;
  /*
   * The following statements result in an error:
   * printf("sizeof char: %d", sizeof char);
   */
  printf("---------- SIZES OF LITERALS ----------\n");
  printf("sizeof(single_character_variable): %d\n", sizeof(single_character_variable));
  printf("sizeof('c'): %d **CHECK THIS**\n", sizeof('c'));
  printf("sizeof((char)'c'): %d\n", sizeof((char)'c'));
  printf("sizeof(1): %d\n", sizeof(1));
  printf("sizeof(NULL): %d **CHECK THIS**\n", sizeof(NULL));
  printf("sizeof(1L): %d **CHECK THIS**\n", sizeof(1L));
  printf("sizeof(1LL): %d\n", sizeof(1LL));
  printf("sizeof(0.1f): %d\n", sizeof(0.1f));
  printf("sizeof(0.1): %d\n", sizeof(0.1));
  printf("sizeof(0.1L): %d\n", sizeof(0.1L));
  printf("\n\n");

  printf("---------- SIZES OF ARRAYS ----------\n");
  printf("sizeof(int_arr): %d\n", sizeof(int_arr));
  printf("sizeof(char_arr): %d\n", sizeof(char_arr));
  printf("sizeof(char_arr[500000]): %d\n", sizeof(char_arr[500000]));
  printf("\n\n");

  printf("---------- SIZES OF POINTERS ----------\n");
  printf("sizeof(char_pointer): %d\n", sizeof(char_pointer));
  printf("sizeof(int_pointer): %d\n", sizeof(int_pointer));
  printf("sizeof(float_pointer): %d\n", sizeof(float_pointer));
  printf("sizeof(&single_character_variable): %d\n", sizeof(&single_character_variable));
  printf("sizeof(&char_arr): %d\n", sizeof(&char_arr));
  return 0;
}

