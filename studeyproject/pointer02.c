/*
�� ¥:2018-03-05
�� ��:������


������ ������ ������ �����ڸ� ����� �� ���� ����(�Ҵ�)�غ��ڽ��ϴ�.
*/
#include <stdio.h>
int main(void) {
	
	int *numPtr; 
	int num1 = 10;

	numPtr = &num1;

 	*numPtr = 20; //f10 �� ����Ͽ��� �ּҸ� �Է��Ѵ�. 

	printf("%d\n", *numPtr);
	printf("%d\n", num1);
}
