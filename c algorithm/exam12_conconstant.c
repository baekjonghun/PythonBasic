#include <stdio.h>
/*
작성자:백종훈
작성일:2018-03-06
제 목:소수 구하기
*/
int main(void) {
	int result = 0;
	int num = 0;
	int i = 0;
	printf("2와 3의 배수가 아닌 100이하의 자연수들 \n");

	for (i = 1; i <= 100; i++) {
		if (i % 2 != 0 && i % 3 != 0) {
			printf("%d ", i);
		}
	}

	printf("2와3의 배수가 아닌 100 이하의 자연수 개수:%d \n",result);



	return 0;
}