/*
void ������ �����ϱ�

�������� �� �� ���� void �����ʹ� �� ����ұ��? void 
�����ʹ� �Ǵ� �� ���� ���� �������� ������ C ����
�پ��� ���·� ���ǰ� �ֽ��ϴ�. ���� ���ڸ� �Լ�����
�پ��� �ڷ����� �޾Ƶ��� ��, �Լ��� ��ȯ �����͸� �پ���
�ڷ������� �� �����Ϳ� ������ ��, �ڷ����� ����� ���� �� ����մϴ�.

*/ 
#include <stdio.h>

int main(void) {
	int num1 = 10;
	char c1 = 'a';
	int *numPtr1 = &num1;
	char *cPtr1 = &c1;

	void *ptr;

	ptr = numPtr1; //void �����Ϳ� ptr ����
	ptr = cPtr1;

	//numPtr1 = ptr;
	//cPtr1 = ptr;   //compile error

}