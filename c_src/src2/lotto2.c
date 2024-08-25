#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int lotto[7];
	
	printf("LOTTO : ");
	
	for (int i = 0; i < 7; ) {
		lotto[i] = rand() % 45 + 1;
		
		int j;
		for (j = 0; j < i; ++j) {
			if (lotto[i] == lotto[j]) {
				break;
			}
		}
		if (i == j) {
			++i;	
		}	
	}
	for (int i = 0; i < 7; ++i) {
		printf("%2d ", lotto[i]);
	}
	
	printf("\n");
	return 0;
}
