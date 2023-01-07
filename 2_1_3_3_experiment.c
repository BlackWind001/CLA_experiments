#include <stdio.h>
#include <stdbool.h>

/*
 * An experiment to check what happens to char
 * variables that are assigned values not present
 * in the ASCII range.
 */

int get_char_code (bool x) {
	return x ? 65 : 312;
}

int get_negative_char_code (bool x) {
	return x ? 65 : -400;
}

int main () {
	char c, c1;
	c = get_char_code(false);
	c1 = get_negative_char_code(false);
	printf("%c %c %d", c, c1, c1);
	return 0;
}
