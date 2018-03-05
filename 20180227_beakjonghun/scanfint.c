#include <stdio.h>
/*
작성일:2018-03-01
작성자:백종훈
-내 용-
scanf의 기본적인 사용법
*/
int main(void) {
	int nAge = 0;
	printf("나이를 입력하시오.");

	scanf("%d", &nAge); //문자를 입력한경우 정수로 인식 못합니다.

	printf("당신의 나이는 %d 입니다.", nAge);
	return 0;
}