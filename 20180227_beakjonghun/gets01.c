#include <stdio.h>
/*
작성일:2018-03-01
작성자:백종훈
-내 용-
활용 :  문자열 입력
*/
int main(void) {

	char chName[32] = { 0 };

	printf("이름을 입력하시오.");
	gets_s(chName, sizeof(chName));

	printf("당신의 이름은");
	puts(chName);
	puts("입니다.");
	return 0;
}