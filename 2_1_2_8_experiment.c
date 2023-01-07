#include <stdio.h>

// Need to check if the increment and decrement
// operators work only with ints or also with
// other types like float and char.

int main () {
	int i = 0;
	float x = 0;
	char c = 'A';
	printf("%d %f %c", ++i, ++x, ++c);
	return 0;
}
