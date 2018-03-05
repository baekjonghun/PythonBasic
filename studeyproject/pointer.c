#include <stdio.h>

int main() {
	int *numPtr; //Asterisk, 애스터리스크
	int num1 = 10;
	 
	numPtr = &num1;
	printf("%p\n", &numPtr);
	printf("%p\n", &num1);

}