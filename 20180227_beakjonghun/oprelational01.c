/*
작성자:백종훈
작성일:2018-02-28
제목:비교 연산자 memcmp() , stcmp() 연산자 가 있다.
*/
#include <stdio.h>

int main(void) {
	int x = 5, y = 10;

	printf("%d\n", x == y); //0
	printf("%d\n", x != y); //1
	printf("%d\n", x > y); //0
	printf("%d\n", x < y); //1

	printf("%d\n", y >= 10); //1
	printf("%d\n", y <= x + 5); //1
	return 0;
}