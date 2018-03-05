#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//문제5
	printf("정수를 연속해서 2개 입력하시오/");

	int num1, num2;
	int sum;
	double avr;

	scanf("%d %d", &num1, &num2);

	sum = num1 + num2;
	avr = sum / 2;

    printf("입력받은 값1:%d , 값2:%d \n", num1, num2);
	printf("합 : %d \n", sum);
	printf("평균: %0.1f \n", avr);


	return 0;
}