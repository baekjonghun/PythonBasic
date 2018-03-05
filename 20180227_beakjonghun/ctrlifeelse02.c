/*
작성자:백종훈
작성일:2018-02-28
제목:중첩 if 문 
*/

#include <stdio.h>

int main(void) {

	int nInput = 0, nSelect = 0;
	scanf("%d", &nInput);

	if (nInput <= 10) {

		if (nInput < 0) {
			nSelect = 0;
		}
		else {
			nSelect = 10;
		}
	
	}
	else {
		nSelect = 20;
	}

	return 0;
}