#include <stdio.h>
/*
int *numPtr;                // 포인터. 포인터를 선언할 때 *
printf("%d\n", *numPtr);    // 역참조. 포인터에 사용할 때 *
*/
int main(void) {
	int *numPtr; //포인트 변수 선언 
	int num1 = 10;

	numPtr = &num1; //메모리 주소 포인터 할당
	printf("%d\n", *numPtr);
	return 0;
}