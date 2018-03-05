#include <stdio.h>

int main(void) {


	int val1 = 0;
	int val2 = 0; 

	int result1, result2;


	result1 = val1++ + val1++ + val1++; //연산자 우선순위 낮음
	result2 = ++val2 + ++val2 + ++val2; //연산자 우선순위 높음


	printf("val1 =%d , result1 = %d ", val1, result1);

	printf("val2 =%d , result2 = %d ", val2, result2);



	return 0;
 }