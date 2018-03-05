#include <stdio.h>

int main(void) {
	int i , j = 0;


	j = 2;
	while (j <= 9) {
		i = 1;
		while (i <= 9) {
			printf("%d*%d=%d \t",j, i , (i*j));
			++i;
		}
		++j;
		putchar('\n');
	}
	return 0;
}