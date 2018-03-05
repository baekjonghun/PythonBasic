#include <stdio.h>
/*
작성자:백종훈
작성일:2018-02-28
제목:형변환
설명:컴퓨터는 문자를 int 로 인식함.
*/
int main(void) {

	char ch = 'A';
	printf("%c \n", ch); //A

	printf(ch + 1); //B
	printf('A' + 2); //C
	printf("%d\n", 5.0 + 2); //0 int double 을 맞추도록 하자.
	printf("%f\n", 5.0 + 2); //7.0000000

	return 0;
}