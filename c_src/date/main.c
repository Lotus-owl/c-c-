#include "date.h"

int main(void)
{
	//int td_year, td_month, td_day
	struct date today;
	today.year = 2024;
	today.month = 7;
	today.day = 12;
	
	//int bd_year = 1999;
	//int bd_month = 6;
	//int bd_day = 16;
	struct date birth = {1999, 6, 16};
	
	//int tmp_year;
	//int tmp_month;
	//int tmp_day;
	struct date tmp;
	
	//tmp_year = td_year;
	//tmp_month = td_month;
	//tmp_day = td_day;
	tmp = today;
	
	printDate(&today);
	printDate(&birth);
	return 0;
}
