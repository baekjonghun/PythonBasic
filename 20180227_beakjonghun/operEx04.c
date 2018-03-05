#include <stdio.h>

int main(void) {
	int num1 = 0, num2 = 0;

	int result;


	result = (num1 += 10) < 0 && (num2 += 10) > 0;
	printf("result = %d \n", result);
	printf("num1 = %d, num2 = %d \n", num1, num2);

	result = (num1 += 10) > 0 || (num2 += 10) > 0;
	printf("result = %d \n", result);
	printf("NUM1 = %d , NUM2=%d \n", num1, num2);

	return 0;
}