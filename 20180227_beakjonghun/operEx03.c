#include <stdio.h>

int main(void) {

	int num = 200;

	printf("sizeof(num):%d \n", sizeof(num));

	printf("sizeof(123):%d \n", sizeof(100));
	printf("sizeof(123.0):%d \n", sizeof(23.45));
	printf("sizeof(0.123):%d \n", sizeof(0.234));

	printf("sizeof(char):%d \n", sizeof(char));
	printf("sizeof(int):%d \n", sizeof(int));
	printf("sizeof(double):%d \n", sizeof(double));
	return 0;
}