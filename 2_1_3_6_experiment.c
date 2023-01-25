#include <stdio.h>

/*
 * An experiment to see if the puts function
 * renders octal and hexadecimal values
 * represented using the escape character
 * as ASCII values.
 */

int main (void) {
	puts("\47 is the ASCII representation of the octal value 47\n");
	puts("\x47 is the ASCII representation of the hexadecimal value 47\n");
	return 0;
}
