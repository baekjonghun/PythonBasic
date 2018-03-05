#include <stdio.h>
double function(int n); 

//함수 정의 


int main(void) {

	printf("반환값: %f", function(7.25));



	return 0;
}


double function(double n) {

	printf("입력된 정수 : %f", n);
	return 0.25;
}

//int형 double함수호출 -> result : 입력된 정수 7 , 반환값: 0 data 손실 