#include <stdio.h>
#include <string.h>

int main(void)
{
	//char str[] = {'h', 'e', 'l', 'l', 'o', '\0'};
	char str[] = "hello";
	printf("%s\n", str);
	
	int len = strlen(str);
	printf("len: %d\n", len);
	
	char str2[strlen(str) + 1];
	strcpy(str2, str);
	printf("str2: %s\n", str2);
	
	if (strcmp(str, str2) == 0) {
		printf("str and str2 are equal\n");
	} else {
		printf("str and str2 are not equal\n");
	}
	
	char str3[] = ", world";
	
	char str4[strlen(str2) + strlen(str3) + 1];
	strcpy(str4, str2);
	strcat(str4, str3);
	printf("str4: %s\n", str4);
	return 0;
}
