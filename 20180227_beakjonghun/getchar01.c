#include <stdio.h>

/*
작성일:2018-03-01
작성자:백종훈
-내 용-
활용 :  사용자가 어떤 문자를 입력했는 지 알아 보는 함수. 
getchar() 입력문자 하나  putchar() 출력 문자 하나 .
*/
int main(void) {

	char ch = 0;
	ch = getchar();

	putchar(ch);
	putchar('A');
	return 0;
}