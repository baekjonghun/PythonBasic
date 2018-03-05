#include <stdio.h>

int main(void) {
	int x = 10;

	x = x + 1; //11
	printf("%d\n", x);

	x += 1; //12
	printf("%d\n", x);

	++x; //13
	printf("%d\n", x);

	return 0;
}