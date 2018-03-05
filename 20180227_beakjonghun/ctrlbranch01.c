#include <stdio.h>
/*
작성자:백종훈
작성일:2018-02-28
제목:if 문 
*/
int main(void) {

	int nAge = 0;
	printf("나이를 입력하시오.: ");
	scanf("%d", &nAge);

	if (nAge >= 20) {
		printf("당신의 나이는 %d세 입니다.", nAge);
	}

	puts("End");
	return 0;
}