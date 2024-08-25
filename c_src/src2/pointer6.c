#include <stdio.h>

int main(void)
{
	void *p;
	
	int a = 100;
	p = &a;
	//*p = 200;
	*(int *)p = 200;
	
	double d = 3.1415;
	p = &d;
	//*p = 2.718;
	*(double *)p = 2.718;
	
	printf("a : %d\td : %f\n", a, d);
	return 0;
}
