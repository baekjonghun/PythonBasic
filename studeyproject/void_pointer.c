/*
void 포인터 선언하기

역참조도 할 수 없는 void 포인터는 왜 사용할까요? void 
포인터는 되는 게 별로 없어 보이지만 실제로 C 언어에서
다양한 형태로 사용되고 있습니다. 예를 들자면 함수에서
다양한 자료형을 받아들일 때, 함수의 반환 포인터를 다양한
자료형으로 된 포인터에 저장할 때, 자료형을 숨기고 싶을 때 사용합니다.

*/ 
#include <stdio.h>

int main(void) {
	int num1 = 10;
	char c1 = 'a';
	int *numPtr1 = &num1;
	char *cPtr1 = &c1;

	void *ptr;

	ptr = numPtr1; //void 포인터에 ptr 저장
	ptr = cPtr1;

	//numPtr1 = ptr;
	//cPtr1 = ptr;   //compile error

}