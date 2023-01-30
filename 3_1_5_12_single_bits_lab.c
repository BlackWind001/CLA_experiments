#include <stdio.h>

/*
 * Scenario:
 *A nibble is just a four-bit aggregation - we can also call it a half-byte.
 *  
 *Sometimes we use the terms low nibble and high nibble to denote nibbles containing less significant bits (low nibble - L) and more significant bits (high nibble - H) within a byte.
 *
 *Write a program that asks the user for one integer number smaller than 256, and prints both nibbles of the number. You don't have to verify the input.
 *
 *Input: 255
 *Output:
 *  H nibble: 15
 *  L nibble: 15
 *
 *
 *Input: 63
 *Output:
 *  H nibble: 3
 *  L nibble: 15
 *
 *
 *Input: 11
 *Output:
 *  H nibble: 0
 *  L nibble: 11
 */

int main () {
  short int num,
        l_bit,
        h_bit,
        l_bitmask = 15;

  scanf("%hd", &num);

  h_bit = num >> 4;
  l_bit = num & l_bitmask;

  printf("H nibble: %d\n", h_bit);
  printf("L nibble: %d\n", l_bit);
  return 0;
}
