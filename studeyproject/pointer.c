#include <stdio.h>

int main() {
	int *numPtr; //Asterisk, �ֽ��͸���ũ
	int num1 = 10;
	 
	numPtr = &num1;
	printf("%p\n", &numPtr);
	printf("%p\n", &num1);

}