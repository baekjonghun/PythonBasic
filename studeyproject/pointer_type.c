#include <stdio.h>
/*
다양한 자료형의 포인터 선언
*/
int main() {
	long long *numPtr1; 
	float *numPtr2;
	char *cPtr1;

	long long num1 = 10;
	float num2 = 3.5f;
	char c1 = 'a';

	numPtr1 = &num1;
	numPtr2 = &num2;
	cPtr1 = &c1;

	printf("%lld\n", *numPtr1);
	printf("%f\n", *numPtr2);
	printf("%c\n", *cPtr1);

	//-값을 상수로 표현-
	const int num3 = 10;
	const int *num3Ptr;
	num3Ptr = &num1;
	//*num3Ptr = 20; complieError


	//-주소를 상수로 표현-
	const int num5 = 10;
	const int num6 = 20;
	const int * const numPtr = &num5;// int형 상수를 가리키는 포인터 상수

	///*numPtr = 30;  //compile error
	//numPtr = &num6; //compile error 
	return 0;
}