#include <stdio.h>
/*
int *numPtr;                // ������. �����͸� ������ �� *
printf("%d\n", *numPtr);    // ������. �����Ϳ� ����� �� *
*/
int main(void) {
	int *numPtr; //����Ʈ ���� ���� 
	int num1 = 10;

	numPtr = &num1; //�޸� �ּ� ������ �Ҵ�
	printf("%d\n", *numPtr);
	return 0;
}