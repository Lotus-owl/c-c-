#include <stdio.h>

int main(void)
{
	int frameScore[11] = {0};
	
	int scores[10][3] = {0};
	
	for (int i = 1; i < 10; ++i) {
		printf("frame%2d, 1st cast: ", i);
		scanf("%d", &scores[i][1]);
		
		if (i > 1 && scores[i-1][1] + scores[i-1][2] == 10 && scores[i-1][1] != 10) {
			int bonus = scores[i][1];
			frameScore[i-1] = frameScore[i-2] + 10 + bonus;
			
			printf("frame%2d score: %2d\n", i-1, frameScore[i-1]);
		}
		
		if (i > 2 && scores[i-2][1] == 10 && scores[i-1][1] == 10) {
			int bonus = scores[i-1][1] + scores[i][1];
			frameScore[i-2] = frameScore[i-3] + 10 + bonus;
			
			printf("frame%2d score: %2d\n", i-2, frameScore[i-2]);
		}
		
		if (scores[i][1] != 10) {
			printf("frame%2d, 2nd cast: ", i);
			scanf("%d", &scores[i][2]);
			
			if (i > 1 && scores[i-1][1] == 10) {
				int bonus = scores[i][1] + scores[i][2];
				frameScore[i-1] = frameScore[i-2] + 10 + bonus;
				
				printf("frame%2d score: %2d\n", i-1, frameScore[i-1]);
			}
			
			if (scores[i][1] + scores[i][2] < 10){
				frameScore[i] = frameScore[i-1] + scores[i][1] + scores[i][2];
				
				printf("frame%2d score: %2d\n", i, frameScore[i]);
			}
		}
	}
	
	int scores10[4] = {0};
	printf("frame10, 1st cast: ");
	scanf("%d", &scores10[1]);
	
	if (scores[9][1] + scores[9][2] == 10 && scores[9][1] != 10) {
		int bonus = scores10[1];
		frameScore[9] = frameScore[8] + 10 + bonus;
		
		printf("frame%2d score: %2d\n", 9, frameScore[9]);
	}
	
	if (scores[8][1] == 10 && scores[9][1] == 10) {
		int bonus = scores[9][1] + scores10[1];
		frameScore[8] = frameScore[7] + 10 + bonus;
		
		printf("frame%2d score: %2d\n", 8, frameScore[8]);
	}
	
	printf("frame10, 2nd cast: ");
	scanf("%d", &scores10[2]);
	
	if (scores[9][1] == 10) {
		int bonus = scores10[1] + scores10[2];
		frameScore[9] = frameScore[8] + 10 + bonus;
		
		printf("frame%2d score: %2d\n", 9, frameScore[9]);
	}
	
	/*
	if (scores10[1] + scores10[2] < 10) {
		frameScore[10] = framescore[9] + scores10[1] + scores[2];
		
		printf("total score: %2d\n", framescore[10]);
	} else {
		rintf("frame10, 3rd cast: ");
		scanf("%d", &scores10[3]);
		
		frameScore[10] = frameScore[9] + scores10[1] + scores10[2] + scores10[3];
		printf("total score: %2d\n", frameScore[10]);
	}
	*/
	
	if (scores10[1] + scores10[2] >= 10) {
		printf("frame10, 3rd cast: ");
		scanf("%d", &scores10[3]);
	}
	
	frameScore[10] = frameScore[9] + scores10[1] + scores10[2] + scores10[3];
	printf("total score: %2d\n", frameScore[10]);
	
	return 0;
}
