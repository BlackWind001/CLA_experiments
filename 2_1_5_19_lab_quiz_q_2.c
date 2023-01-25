#include <stdio.h>

/*
 * 0 module any number (other than 0) is 0.
 */
int main () {
	int i = 2 * 2 / 2 + 2 * 2 - 1 / 2 % 2;
	printf("%d %d\n", i, 0%2);
	return 0;
}
