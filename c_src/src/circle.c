#include <stdio.h>
#define PI 3.141592
int main(void)
{
	double radius;
	printf("input radius: ");
	scanf("%lf", &radius);
	
	double area = PI * radius * radius;
	
	printf("area: %.2f\n", area);
	return 0;
}
