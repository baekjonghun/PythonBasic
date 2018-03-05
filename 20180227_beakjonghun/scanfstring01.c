#include <stdio.h>
/*
작성자:백종훈
작성일:2018-02-28
제목:문자열 입력
*/
int main(void) {

	char szBuffer[34] = { 0 };


	scanf("%s", szBuffer);
	printf("사용한 문자열은 %s 입니다.", szBuffer);

	return 0;
}