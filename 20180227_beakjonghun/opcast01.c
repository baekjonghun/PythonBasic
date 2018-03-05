#include <stdio.h>
/*
작성자:백종훈
작성일:2018-02-28
제목:곱셈 나눗셈 연산자
설명:형변환
*/
int main(void) {
	int x = 5;

	printf("%d\n",5 /2); //int -> int
	printf("%f\n", 5.0 / 2); //double -> int
	printf("%f\n", 5 / 2.0); //int -> double 
	printf("%f\n", (double)5 / 2); 
	printf("%f\n", (double)x / 2);
	printf("%f\n", 5 / (double)2);
	printf("%f\n", (double) x/ 2);

	/*
	실수형을 정수형으로 형변환 하면 소수점이하 정보 모두 절사 
2
2.500000
2.500000
2.500000
2.500000
2.500000
2.500000
	*/
	return 0;
}