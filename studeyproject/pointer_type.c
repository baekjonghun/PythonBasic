#include <stdio.h>
/*
�پ��� �ڷ����� ������ ����
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

	//-���� ����� ǥ��-
	const int num3 = 10;
	const int *num3Ptr;
	num3Ptr = &num1;
	//*num3Ptr = 20; complieError


	//-�ּҸ� ����� ǥ��-
	const int num5 = 10;
	const int num6 = 20;
	const int * const numPtr = &num5;// int�� ����� ����Ű�� ������ ���

	///*numPtr = 30;  //compile error
	//numPtr = &num6; //compile error 
	return 0;
}