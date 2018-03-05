#include <stdio.h>
/*
작성자:백종훈
작성일:2018-02-28
제목:Sizeof 연산자
*/
int main(void) {
	int nData = 10;

	printf("%d , %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
	printf("%d , %d\n", sizeof('A'), sizeof(char));

	printf("%d , %d\n", sizeof(123.45F), sizeof(123.45));
	printf("%d , %d\n", sizeof(nData + 10), sizeof(++nData));
	return 0;
}