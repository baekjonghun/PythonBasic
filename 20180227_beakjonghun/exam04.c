#include <stdio.h>
/*
작성일 : 2018-02-28
작성자 :백종훈 
문제 : 두개의 결과를 사칙연산으로 계산한다.
*/
int main(void) {
	int num1, num2;

	printf("정수 2개 입력");
	scanf("%d %d", &num1, &num2);

	printf("%d + %d = %d \n",num1,num2,num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
	printf("%d / %d = %d \n", num1, num2, num1 / num2);

	return 0;
}