/*
작성일:2018.03.05
작성자:백 종 훈
제목 : 변수의 스코프
*/

#include <stdio.h>
int num = 3; //전역변수 data / heap / stack  프로그램이 시작되면 사라진다.

int main(void) {
	if (num == 1) {
		int num = 2;
		num++;
		printf("if 문 안에서의  num: %d \n", num);
	}
	else {
		num++;
		printf("else문 안에서의 num:%d \n", num);
	}
	printf("if 문 밖에서의 num : %d \n", num); 
	{
		int num = 100;
		num++;
		printf("이름없는 영역에서의 num: %d \n", num);
	}
	

	return 0;
}