/*
작성일:2018-03-01
작성자:백종훈
-내 용-
실수와 지수 입력
*/
#include <stdio.h>

int main(void) {

	printf("%d\n", sizeof(123.456F));
	printf("%d\n", sizeof(123.456));

	printf("%f\n", 123.456F);
	printf("%f\n", 123.456);
	printf("%lf\n", 123.456); //꼭 lf 를 해주지 않아도 되지만 scanf에서는 lf형식으로 써주도록 함.

	/*
	result 
4
8
123.456001
123.456000
123.456000
	*/
	return 0;
}