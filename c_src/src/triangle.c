#include <stdio.h>

int main(void)
{
	//int width;
	//int height;
	int width, height;
	
	//scanf("%d", &width);
	//scanf("%d", &height);
	scanf("%d %d", &width, &height);
	
	double scale;
	
	scale = width * height / 2.0;
	
	printf("width: %d, height: %d ---> scale: %.1f\n", width, height, scale);
	return 0;
}
