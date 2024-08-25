#include <stdio.h>

int main(void)
{
	int male, female;
	printf("#Male #Female : ");
	scanf("%d %d", &male, &female);
	
	//double rateM, rateF;
	//rateM = 1.0 * male / (male + female) * 100;
	//rateF = 1.0 * female / (male + female) * 100;
	double rateM = (double)male / (double)(male + female) * (double)100;
	double rateF = (double)female / (male + female) * 100;
	
	printf("Male: %.2f%% \t Female: %.2f%%\n", rateM, rateF);
	
	return 0;
}
