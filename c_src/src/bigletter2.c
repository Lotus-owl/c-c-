#include <stdio.h>

int main(void)
{
	char c;
	printf("input letter : ");
	scanf("%c", &c);
	
	if (c >= 'A' && c <= 'Z') {
		printf ("%c is a big\n", c);
	} /*else {
	
	}*/
	return 0;
}
