#include <stdio.h>

int main()
{
	float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
	/* your code */
	int iter, swapped;
	float aux;
	
	do {
	    swapped = 0;
	    for (iter = 0; iter < 9; iter++) {
	        if (numbers[iter] < numbers[iter + 1]) {
	            swapped = 1;
	            
	            aux = numbers[iter];
	            numbers[iter] = numbers[iter + 1];
	            numbers[iter + 1] = aux;
	        }
	        
	        printf("%.2f ", numbers[iter]);
	    }
	    printf("%.2f\n", numbers[iter]);
	} while(swapped);
	return 0;
}
