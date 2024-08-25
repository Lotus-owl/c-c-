#include <stdio.h>

int main(void)
{
	int year;
	printf("input year : ");
	scanf("%d", &year);
	
	int isleap = (year % 4 == 0) && !(year % 100 == 0) || (year % 400 == 0);
	//int isleap = (year % 400 == 0) || (year % 4 == 0) && !(year % 100 == 0);
		//short-cut circult
	// year % 100 != 0
	printf("%d is a leap year : %d\n", year, isleap);
	return 0;
}
