#include <stdio.h>

/*
 *
 * The rules for additive operations is as follows:
 * 1. arithmetic + arithmetic
 *    
 * 2. scalar + integral
 *    
 * 3. integral + scalar
 *    
 * 4. arithmetic - arithmetic
 *    
 * 5. scalar - scalar
 *
 * The types and meanings of the above operands are as follows:
 *  arithmetic - Integral and floating types are collectively called "arithmetic" types.
 *  integral - Types char and int of all sizes (long, short) and enumerations are "integral" types.
 *  scalar - Scalar operands are operands of either arithmetic or pointer type.
 *
 *
 * Note from the ref regarding pointer subtraction:
 * One of the operands can be of integral type, as long as it is the second operand.
 *
 * Reference: https://learn.microsoft.com/en-us/cpp/cpp/additive-operators-plus-and?view=msvc-170
 */


 /* This file contains the following experiments
 * related to pointers:
 * 1. What is their default value?
 * 2. What happens when you subtract a pointer from a pointer? As can be seen from the above table, this operation (scalar - scalar) is allowed.
 * 3. What happens when you add 2 pointers? From the above table, we can see that there are only 2 addition operations that are valid with pointers:
 *  a. scalar + integer
 *  b. integer + scalar
 * 4. From the above allowed list, the one that catches attention is the rule:
 *  scalar - scalar
 * being valid. This needs to be put to test with
 * integers, pointers and floats.
 */

int main () {
  int *ptr;
  int arr[5], arr2[5];
  void *v_ptr1, *v_ptr2;
  int rand = 2;

  v_ptr1 = arr + 1;
  v_ptr2 = arr + 3;

  printf("%p\n", ptr);
  printf("%d\n", (arr+3) - (arr + 1));
  printf("%d\n", (v_ptr2) - (v_ptr1));
  printf("%d\n", (arr2) - (arr + 1));
  // printf("%d\n", (v_ptr2) - (arr + 1));
  // The above operation is invalid since both pointer
  // types need to be the same.
  printf("%d %d %d\n", (v_ptr2) == (arr + 3), v_ptr2 == 0, v_ptr2 == rand);
  // The above is possible since the equality operator
  // allows pointers to be compared with null pointers
  // and literal 0.

  return 0;
}

