#include <stdio.h>
/*
작성일:2018-03-01
작성자:백종훈
-내 용-
형식 문자와 이스케이프 시퀀스
*/
int main(void) {

	int x = 10;

	putchar('B');
	putchar('\n');

	printf("%c \n", 'A');

	printf("x는 %d 입니다.\n", x);
	
	/*
	result:
	B
	A
	x는 10 입니다.
	*/

	return 0;
}