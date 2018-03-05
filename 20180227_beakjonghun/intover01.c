#include <stdio.h>
/*
작성일:2018-03-01
작성자:백종훈
-내 용-
활용 : 부호가 없는 정수 형 출력 
*/
int main(void) {
	printf("%d\n", 10); //부호가 있는 정수형 
	printf("%u\n", 10); //부호가 없는 정수형
	printf("%d\n", 10U);//unsigned int 상수 
	printf("%u\n", 10U); //unsigned int 상수 

	printf("%d\n", 2148483647);
	printf("%d\n", 2148483648); //범위를 넘어선다. -
	printf("%u\n", 2148483649); //부호가 없으므로 값이 제대로 출력

	printf("%d\n", -1); //-1 
	printf("%u\n", -1); //2148483645

	return 0;
}