#include <stdio.h>

int main (void) {
	int i, j = 18642731; // value of j obtained from https://stackoverflow.com/questions/68690961/why-does-converting-int-to-float-lose-precision-in-c-programming-language
	float f = 1E10, f2 = j;
	i = f;
	printf("%d %d %f %d", i, sizeof(i), f, sizeof(f));
	printf("\n%d %f", j, f2); // check for loss of precision from int to float conversion
	return 0;
}

