#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("input 3 nums : ");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b) {
		if (c > a) {
			printf("max: %d mid: %d min: %d\n", c, a, b);
		} else if (c > b) {
			printf("max: %d mid: %d min: %d\n", a, c, b);
		} else {
			printf("max: %d mid: %d min: %d\n", a, b, c);
		}
	} else {
		if(c > b) {
			printf("max: %d mid: %d min: %d\n", c, b, a);
		} else if (c > a) {
			printf("max: %d mid: %d min: %d\n", b, c, a);
		} else {
			printf("max: %d mid: %d min: %d\n", b, a, c);
		}
	}
	return 0;
}
	
	
 /*int max;
	if (a > b && a > c) {
		max = a;
	} else if (b > c) {
		max = b;
	} else {
		max = c;
	}
	
	int min;
	if (a < b && a < c) {
		min = a;
	} else if (b < c) {
		min = b;
	} else {
		min = c;
	}
	
	int mid;
	if (a != max && a != min) {
		mid = a;
	} else if (b != max && b != min) {
		mid = b;
	} else {
		mid = c;
	}
	
	printf("max : %d\tmid : %d\tmin : %d\n", max, mid, min);
	return 0;
} */
