#include <stdio.h>

/*
 * This is a program to check whether the loss of
 * data while converting from int to float occurs
 * right after entering the 8 digits.
 *
 * What caused me to conduct this experiment:
 * https://stackoverflow.com/questions/11489428/how-to-make-vim-paste-from-and-copy-to-systems-clipboard
 */

int main () {
	int i = 1E8 + 5;
	float f = i;

	printf("%d %f\n", i, f);
	return 0;
}
