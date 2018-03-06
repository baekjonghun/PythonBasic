#include <stdio.h>

int main(void) {
	int count = 0;
	scanf_s("%d", &count);
	int i = 1; 
	int threeNum = 3;

	while (i <= count) {
		printf("3 * %d = %d", i , (threeNum * i));
		i++;
	}
	
	return 0;
}