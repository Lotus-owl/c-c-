#include <stdio.h>

int main(void)
{
/*	int score1, score2, score3, score4, score5;
	
	scanf("%d %d %d %d %d", &score1, &score2, &score3, &score4, &score5);
	
	int sum = score1 +score2 +score3 +score4 +score5; */

	int scores[5];
	
	//scanf("%d %d %d %d %d", &scores[0], &scores[1], &scores[2], &scores[3], &scores[4]);
	
	for (int i = 0; i < 5; ++i) {
		scanf("%d", &scores[i]);
	}
	
	int sum = 0;
	for (int i = 0; i < 5; ++i) {
		sum = sum + scores[i];
	}
	double avg = (double)sum / 5.0;
	printf("sum : %d\taverage : %.2f\n", sum, avg);
	
	return 0;
}
