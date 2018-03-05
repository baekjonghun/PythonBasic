#include <stdio.h>
/*
작성자:백종훈
작성일:2018-02-28
제목:else if 문
10 보다 같거나 작으면 10  크면 20
*/
int main(void) {
	int nInput = 0, nSelect = 0;
	scanf("%d", &nInput);

	if (nInput <= 10) {
		nSelect = 10;
	}
	else {
		nSelect = 20;
	}
	return 0;
}