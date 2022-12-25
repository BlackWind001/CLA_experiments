#include <stdio.h>

int main (void) {
	int i = 10/4;
	float f1 = 10/4, f2 = 10.0/4.0, f3 = 10/4.;
	printf("%d %f %f %f", i, f1, f2, f3);
	return 0;
}

