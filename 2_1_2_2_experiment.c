#include <stdio.h>
/*
 * This is an experiment to check what happens when you try to
 * divide by zero in the runtime. At compile time, division by
 * zero gets caught but not at runtime.
 *
 * The result is very interesting. Try running it.
 */
int main (void) {
	int zero = 0;
	float x = 1.0;
	printf("%f", x/zero);
	return 0;
}

