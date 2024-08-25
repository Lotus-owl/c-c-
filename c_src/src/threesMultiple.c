#include <stdio.h>

int main(void)
{
	int i;
	i = 1;
	
	while (i <= 100) {
/*		if (i % 3 == 0) {
			printf("%d O\t", i);
		} else {
			printf("%d X\t",i);
		}
*/
		printf("%d --- %c\n", i, (i % 3 == 0) ? 'O' : 'X');
		++i;
	}	
	
//	printf("\n");
	return 0;
}
