#include <stdio.h>

int main () {
	int i;
	i = 100; 
	if(i >= 100) 
		i++; 
	if(i > 101) 
		i++;
	printf ("%d", i);
	return 0;
}
