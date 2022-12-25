#include <stdio.h>

/*
 * An experiment to check how the modulus operator reacts
 * to float values. All the following experiments were caught
 * during compile time.
 *
 * Need to check what the behaviour would be if the compiler does
 * not know the type of the arguments passed to modulus (%) until
 * in runtime. Then check the behaviour.
 */
int main (void) {
	int x = 5;
	float y = 2.5;
	// printf("%d", 5.5%2); // This results in an error
	// printf("%d", 5%2.5); // This results in an error
	printf("%f", x%y); // Also results in an error since y's type is float
			   // The modulus operator expects both arguments to be
			   // integers.
	return 0;
}

