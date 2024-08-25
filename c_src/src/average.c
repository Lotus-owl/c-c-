#include <stdio.h>

int main(void)
{
	int Kor, Eng, Math;
	printf("input score Kor, Eng, Math : ");
	scanf("%d %d %d", &Kor, &Eng, &Math);
	
	int sum = Kor + Eng + Math;
	
	double avg = (double)sum / 3.0;
	//double avg = sum / 3.0;
	//double avg = sum / 3;
	
	printf("Average: %.2f\n", avg);
	return 0;
}
