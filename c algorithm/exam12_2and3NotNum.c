#include <stdio.h>
/*
작성자:백종훈
작성일:2018-03-06
제 목:소수 구하기
*/
//100 이하의 자연수중 2의배수도 3의배수도 아닌 자연수의 개수 를 출력 

int main(void) {
	
	/*
	for (int i = 1; i <= 100; ++i) {

		if (i%2 != 0 && i%3!=0) {
			printf("%d ,", i);
		}
	}
	 */

	int j = 0;
	while (j < 100) {
		j++;
		if (j % 2 != 0 && j % 3 != 0) {
			printf("%d ,", j);
		}
		else { continue; }
	}

	return 0;
}