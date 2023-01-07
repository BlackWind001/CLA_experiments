#include <stdio.h>

/*
 * Common mistakes made when using the printf statement.
 */
int main () {
	int i = 10, j = 220;
	printf("%d %d %c %f\n", i, j); // Prints out 10 220  0.0000 - seems like it prints the default values.
	printf("%d\n", i, j); // Prints out 10 - ignores the 3rd argument.
	printf("%f\n", j); // Prints out 0.00000 - does not even convert the 220. Seems to print default value.
	printf("%s\n", i); // Causes Segmentation fault.
	return 0;
}
