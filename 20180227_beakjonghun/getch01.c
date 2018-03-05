#include <stdio.h>
#include <conio.h>
/*
작성일:2018-03-01
작성자:백종훈
-내 용-
활용 :  아무 키나 눌려서 사용자 입력이 발생했음을 감지하려는 목적.
_getch()  아무키나 누르면 다음으로 넘어가는 메시지 출력
*/
int main(void) {

	char ch = 0;
	printf("아무 키나 누르면 다음으로 넘어 갑니다. \n");

	ch = _getch();

	printf("입력한 키는 ");
	putchar(ch);
	printf("입니다.");
}