#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int question[3];

/*	while(1){
		for (int i = 0; i < 3; ++i) {
			question[i] = (rand() % 9 + 1);
		}
		if (question[0] != question[1] && question[0] != question[2] && question[1] != question[2]) {
			break;
		}
	}
*/
	question[0] = rand() % 9 + 1;
	
	do {
		question[1] = rand() % 9 + 1;
	} while (question[1] == question[0]);
	
	do {
		question[2] = rand() % 9 + 1;
	} while (question[2] == question[0] || question[2] == question[1]);
			//printf("%d %d %d", question[0], question[1], question[2]);
	int count = 0;
	
	while (1) {		//infinite loop
		++count;
		
		int answer[3];
		printf("What's the answer? : ");
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
		
		int strike = 0;	
		int ball = 0;
		
		for (int j = 0; j < 3; ++j) {
			for (int k = 0; k < 3; ++k) {
				if (answer[j] == question[k]) {
					if (j == k) {
						++strike;
					} else {
						++ball;
					}
				}
			}
		}
		
		printf("strike : %d\tball : %d\n", strike, ball);	
		
		if (strike == 3) {
			break;
		}
	}
	
	printf("Congraturation! Your count : %d\n", count);
	return 0;
}
