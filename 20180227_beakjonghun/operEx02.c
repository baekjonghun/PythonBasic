#include <stdio.h>

int main(void) {

	if (1 > 2) {
		printf("1이 더 크다");
	}
	else {
		printf("0이 더 작다");
	}


	if (1 == 1) {
		printf("크기가 같다.");
	}
	else {
		printf("같지 않다.");
	}


         

	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3;

	result1 = (num1 == 10 && num2 == 12);
	result2 = (num1 <= 12 || num2 >= 12);
		result3 = !num1;
		printf("result1: %d \n", result1);
		printf("result2: %d \n", result2);
		printf("result3: %d \n", result3);
	return 0;
 }