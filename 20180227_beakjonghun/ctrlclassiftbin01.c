/*
작성자:백종훈
작성일:2018-02-28
제목:if 문 사용
*/
#include <stdio.h>

int main(void) {

	int nInput = 0;
	char ch = 'A';

	printf("점수를 입력하시오.");
	scanf_s("%d", &nInput);

	if (nInput >= 80) {
		if (nInput >= 90) {
			ch = 'A';
		}
		else {
			ch = 'B';
		}

	}
	else {
		if (nInput >= 70) {
			ch = 'C';
		}
		else {
			ch = 'D';
			if (nInput < 60) {
				ch = 'F';
			}

		}
	}
	printf("당신의 학점은 %c 입니다.", nInput);

	return 0;
}