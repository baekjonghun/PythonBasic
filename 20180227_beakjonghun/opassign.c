#include <stdio.h>
/*
작성자:백종훈
작성일:2018-02-28
제목:대입 연산자 
설명:단순 대입연산자 
*/
int main(void) {
	int x = 0, nInput = 0;
	scanf_s("%d", &nInput);

	x = nInput;
	printf("%d\n", x);
	return 0;
}