/*
작성자:백종훈
작성일:2018-02-28
제목:Max 서바이벌 
*/
#include <stdio.h>

int main(void) {

	int MAX = 0;

	int num1 , num2 , num3 = 0;

	scanf_s("%d %d %d", &num1, &num2 , &num3);
	MAX = num1 < num2 ? num2 : num1;
	MAX = MAX < num3 ? num3 : MAX;

	printf("세 정수중 가장 큰수는 %d 입니다.", MAX);
	

	return 0;
}