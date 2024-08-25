#include <stdio.h>
#include "date.h"
/*
void printDate(int year, int month, int day)
{
	printf("(%d/%d/%d)\n", year, month, day);
}

void printDate(struct date d)
{
	printf("(%d/%d/%d)\n", d.year, d.month, d.day);
}
*/
void printDate(const struct date *pd)
{
	//printf("(%d/%d/%d)\n", (*pd).year, (*pd).month, (*pd).day);
	printf("(%d/%d/%d)\n", pd->year, pd->month, pd->day);
}
