#include <stdio.h>

int main(void)
{
	//int code;
	char code;
	printf("input letter : ");
	//scanf("%d", &code);
	scanf("%c", &code);
	
	//int isBig = (code >= 65 && code <= 90);
	int isBig = (code >= 'A' && code <= 'Z');
	
	printf("%c is big letter : %d\n", code, isBig);
	return 0;
}
