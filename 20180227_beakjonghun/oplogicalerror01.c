/*
작성자:백종훈
작성일:2018-02-28
제목:And 연산자
*/

#include <stdio.h>

int main(void) {
	int nInput = 0, bResult = 0;

	scanf("%d", &nInput);
	bResult = 3 < nInput < 20;
	printf("Result: %d ( 1:true , 0:false)\n", bResult);
	return 0;
}