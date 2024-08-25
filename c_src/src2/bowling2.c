#include <stdio.h>

int main(void)
{
	int frameScore[11] = {0};
	
	int scores[11][3] = {0};
	int bonus_cast;			//10frame 3rd
	
	for (int i = 1; i < 11; ++i) {
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
		
		if (scores[i][1] != 10 || i == 10) {
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
			
			if (i == 10 && scores[i][1] + scores[i][2] >= 10) {
				printf("frame%2d, 3rd cast: ", i);
				scanf("%d", &bonus_cast);
				
				frameScore[i] = frameScore[i-1] + scores[i][1] + scores[i][2] + bonus_cast;
				printf("frame%2d score: %2d\n", i, frameScore[10]);
			}
		}
	}
	
	return 0;
}
