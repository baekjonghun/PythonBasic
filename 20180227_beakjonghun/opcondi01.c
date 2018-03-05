/*
작성자:백종훈
작성일:2018-02-28
제목:삼항 연산자 
*/
#include <stdio.h>

int main(void) {
	int nInput = 0, nSelect = 0;
	scanf("%d", &nInput);

	nSelect = nInput <= 10 ? 10 : 20; // 조건식? true:false

	nInput <= 10 ? (nSelect = 10) : (nSelect = 20);
	return 0;
}