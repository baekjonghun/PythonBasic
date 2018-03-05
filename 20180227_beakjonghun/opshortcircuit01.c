/*
작성자:백종훈
작성일:2018-02-28
제목:ShotSercit
나이가 20세 이상 30세 이하이면서 동시에 150cm 이상이면 합격 
*/

#include <stdio.h>
typedef enum { false, true } bool;

int main(void) {
	int age = 0;
	int nHeight = 0;
	bool flag = true;
	scanf_s("%d", &age);
	scanf_s("%d", &nHeight);

		 flag = (20 >= age && age <= 30 && nHeight >= 150); //쇼트 서킷
	printf("합격:1 , 불합격:0 결과:%d \n", flag);


	return 0;
}