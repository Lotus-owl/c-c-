#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int balls[45];
	for (int i = 0; i < 45; ++i) {
		balls[i] = i + 1;
	}
	
	// shuffle
	srand(time(NULL));
	for (int i = 1; i <= 1000000; ++i) {
		int index1 = rand() % 45;
		int index2 = rand() % 45;
		
		int tmp = balls[index1];
		balls[index1] = balls[index2];
		balls[index2] = tmp;
	}
	
	printf("LOTTO : ");
	
	for (int i = 0; i < 7; ++i) {
		printf("%2d ", balls[i]);
	}
	
	printf("\n");
	return 0;
}
