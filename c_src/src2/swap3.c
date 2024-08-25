#include <stdio.h>

int a;		//	global var.
int b;

void swap(void)
{
	int tmp = a;		//	local var.
	a = b;
	b = tmp;
}

int main(void)
{
	a = 100;
	b = 200;
	printf("a : %d\tb : %d\n", a, b);
	
	swap();
	
	printf("a : %d\tb : %d\n", a, b);
	return 0;
}
