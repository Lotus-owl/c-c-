#include <stdio.h>

void printStringArray1(char (*sA)[20], int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s\n", &sA[i][0]);			//sA[i];
	}
}

void printStringArray2(char **sA, int size)
{
	for (int i = 0; i < size; ++i) {
		printf("%s\n", sA[i]);			//&sA[i][0];
	}
}

int main(void)
{
	char cities1[][20] = {
		"Seoul", "Los Angeles", "Paris", "Rio de janeiro", "Moscow"
	};
	
	char *cities2[][20] = {
		"Seoul", "Los Angeles", "Paris", "Rio de janeiro", "Moscow"
	};
	
	printStringArray1(cities1, 5);
	printStringArray2(*cities2, 5);
	
	return 0;
}
