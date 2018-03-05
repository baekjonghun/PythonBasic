/*
날 짜:2018-03-05
이 름:백종훈


포인터 변수에 역참조 연산자를 사용한 뒤 값을 저장(할당)해보겠습니다.
*/
#include <stdio.h>
int main(void) {
	
	int *numPtr; 
	int num1 = 10;

	numPtr = &num1;

 	*numPtr = 20; //f10 을 사용하여서 주소를 입력한다. 

	printf("%d\n", *numPtr);
	printf("%d\n", num1);
}
