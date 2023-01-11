#include <stdio.h>

int main()
{
	/* your code */
	int day, month, year;
	int dayNumber;
	int days_1, days_2, days_3, days_4, days_5, days_6, days_7, days_8, days_9, days_10, days_11, days_12;
	
	scanf("%d", &day);
	scanf("%d", &month);
	scanf("%d", &year);
	
	days_1 = 31;
	days_2 = days_1 + 28;
	/* because you may not know the else instruction yet, 
	   this simple formula will help you to check if a year is a leap year */
		if (year % 400 == 0) {
			days_2 = days_1 + 29;
			printf("Is leap year. days_2: %d, days_1: %d\n", days_2, days_1);
		}
		else if (year % 100 == 0) {
			days_2 = days_1 + 28;
			printf("Is not leap year. days_2: %d, days_1: %d\n", days_2, days_1);
		}
		else if (year % 4 == 0){
			days_2 = days_1 + 29;
			printf("Is leap year in second if. days_2: %d, days_1: %d\n", days_2, days_1);
		}
	/* your code */
	
	days_3 = days_2 + 31;
	days_4 = days_3 + 30;
	days_5 = days_4 + 31;
	days_6 = days_5 + 30;
	days_7 = days_6 + 31;
	days_8 = days_7 + 31;
	days_9 = days_8 + 30;
	days_10 = days_9 + 31;
	days_11 = days_10 + 30;
	days_12 = days_11 + 31;
	
	if (month == 1) dayNumber = day;
	if (month == 2) dayNumber = days_1 + day;
	if (month == 3) dayNumber = days_2 + day;
	if (month == 4) dayNumber = days_3 + day;
	if (month == 5) dayNumber = days_4 + day;
	if (month == 6) dayNumber = days_5 + day;
	if (month == 7) dayNumber = days_6 + day;
	if (month == 8) dayNumber = days_7 + day;
	if (month == 9) dayNumber = days_8 + day;
	if (month == 10) dayNumber = days_9 + day;
	if (month == 11) dayNumber = days_10 + day;
	if (month == 12) dayNumber = days_11 + day;
	
	printf("The day of the year: %d", dayNumber);
	return 0;
}
