#include <stdio.h>

int main () {
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
    unsigned short is_valid_month = 1,
      sum = daysInJan + daysInFeb + daysInMar + daysInApr + daysInMay + daysInJune + daysInJuly + 
        daysInAug + daysInSep + daysInOct + daysInNov + daysInDec;
    unsigned short input;

    scanf("%hu", &input);

    switch (input) {
      default: is_valid_month = 0; break;
      case 1: sum -= daysInJan;
      case 2: sum -= daysInFeb;
      case 3: sum -= daysInMar;
      case 4: sum -= daysInApr;
      case 5: sum -= daysInMay;
      case 6: sum -= daysInJune;
      case 7: sum -= daysInJuly;
      case 8: sum -= daysInAug;
      case 9: sum -= daysInSep;
      case 10: sum -= daysInOct;
      case 11: sum -= daysInNov;
      case 12: sum -= daysInDec;
    }

    if (is_valid_month)
      printf("There are %d days before the given month.", sum);
    else
      printf("Error: no such month in my calendar.");
  return 0;
}
