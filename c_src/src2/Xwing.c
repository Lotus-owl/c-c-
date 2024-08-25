#include <stdio.h>

int main(void)
{
/*	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (i == j || j == 5-i-1) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
*/	
	for (int i = 1; i <= 5; ++i) {
		for (int j = 1; j <= 5; ++j) {
			printf( (i == j || j + i == 6) ? "*" : " ");
		}
		printf("\n");
	}
	return 0;
}
