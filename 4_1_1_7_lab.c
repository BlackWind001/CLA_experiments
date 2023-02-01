#include <stdio.h>

/*
 * I can only think of the manual way to do this.
 * Not sure if there is another way possible with switch-case.
 *
 * Edit: I solved it, bitches.
 */

/*
 * Scenario:
 * Write a program that asks the user to enter the number of a month, and prints the number of days before this month since the start of the year.
 
 * When the number does not correspond to a month (less than 1 or greater than 12), the program prints: Error: no such month in my calendar..

 * Use only switch for computing the sum of the days (don't use any loops).

 * You don't have to check whether or not the year is a leap year - assume it is a leap year.
 */

int main()
{
	/* your code */
	unsigned short daysInJan = 31,
    	daysInFeb = 29,
    	daysInMar = 31,
    	daysInApr = 30,
    	daysInMay = 31,
    	daysInJune = 30,
    	daysInJuly = 31,
    	daysInAug = 31,
    	daysInSep = 30,
    	daysInOct = 31,
    	daysInNov = 30,
    	daysInDec = 31;
    unsigned short sum = 0, is_valid_month = 1;
    unsigned short input;
    
    scanf("%hu", &input);
    
    switch (input) {
        default: is_valid_month = 0; break;
        case 12: sum += daysInNov; 
        case 11: sum += daysInOct; 
        case 10: sum += daysInSep; 
        case  9: sum += daysInAug; 
        case  8: sum += daysInJuly;
        case  7: sum += daysInJune;
        case  6: sum += daysInMay; 
        case  5: sum += daysInApr; 
        case  4: sum += daysInMar; 
        case  3: sum += daysInFeb; 
        case  2: sum += daysInJan; 
        case  1: break;
    }

    if (is_valid_month)
      printf("There are %d days before the given month.", sum);
    else
      printf("Error: no such month in my calendar.");
    
	return 0;
}
