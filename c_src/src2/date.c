#include <stdio.h>
void printDate(int year, int month, int day)
{
	printf("(%d/%d/%d)\n", year, month, day);
}

int main(void)
{
	int td_year = 2024;
	int td_month = 7;
	int td_day = 12;
	
	int bd_year = 1999;
	int bd_month = 6;
	int bd_day = 16;
	
	int tmp_year;
	int tmp_month;
	int tmp_day;
	
	tmp_year = td_year;
	tmp_month = td_month;
	tmp_day = td_day;
	
	printDate(td_year, td_month, td_day);
	printDate(bd_year, bd_month, bd_day);
	
	return 0;
}
