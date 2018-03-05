/*
날짜:2018-03-05
이름:백종훈
제목:에러 패턴 빠져나오기
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int gender; 
	int age; 
	int isOwner;

	scanf("%d %d %d", &gender, &age, &isOwner);

	printf("안녕하세요");
	printf("문을 연다. \n");

	if (gender == 2) {
		goto EXIT;
	}l
	if (age < 30) {
		goto EXIT;
	}
	if (isOwner == 0) {
		goto EXIT;
	}

EXIT:
	printf("안녕히 계세여. \n");
	printf("문을 닫는다.\n");

}