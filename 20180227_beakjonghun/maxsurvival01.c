/*
�ۼ���:������
�ۼ���:2018-02-28
����:Max �����̹� 
*/
#include <stdio.h>

int main(void) {

	int MAX = 0;

	int num1 , num2 , num3 = 0;

	scanf_s("%d %d %d", &num1, &num2 , &num3);
	MAX = num1 < num2 ? num2 : num1;
	MAX = MAX < num3 ? num3 : MAX;

	printf("�� ������ ���� ū���� %d �Դϴ�.", MAX);
	

	return 0;
}