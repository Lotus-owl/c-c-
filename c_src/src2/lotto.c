#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int lotto[6];
	int bonus;
	
	printf("LOTTO : ");
	
	lotto[0] = rand() % 45 + 1;
	
	do {
		lotto[1] = rand() % 45 + 1;
	} while (lotto[1] == lotto[0]);
	
	do {
		lotto[2] = rand() % 45 + 1;
	} while (lotto[2] == lotto[0] || lotto[2] == lotto[1]);
	
	do {
		lotto[3] = rand() % 45 + 1;
	} while (lotto[3] == lotto[0] || lotto[3] == lotto[1] || lotto[3] == lotto[2]);
	
	do {
		lotto[4] = rand() % 45 + 1;
	} while (lotto[4] == lotto[0] || lotto[4] == lotto[1] || lotto[4] == lotto[2] || lotto[4] == lotto[3]);
	
	do {
		lotto[5] = rand() % 45 + 1;
	} while (lotto[5] == lotto[0] || lotto[5] == lotto[1] || lotto[5] == lotto[2] || lotto[5] == lotto[3] || lotto[5] == lotto[4]);
	
	for (int i = 0; i < 6; ++i) {
		do {
			bonus = rand() % 45 + 1;
		} while (bonus == lotto[i]);
		printf("%d ", lotto[i]);
	}
	
	printf("+ %d\n", bonus);
	return 0;
}
