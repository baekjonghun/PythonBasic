#include <stdio.h>
/*
작성자:백종훈
작성일:2018-02-28
제목:나누기 , 나머지 연산자
설명:
*/
int main(void) {
	int nInput = 0;
	printf("정수를 입력하시오.");

	scanf("%d",&nInput);
	printf("%d\n", 10 / nInput); //0을 입력하면 연산이 불가능 하다.
	return 0;
}