#include <stdio.h>
/*
�ۼ��� : 2018-02-28
�ۼ��� :������ 
���� : �ΰ��� ����� ��Ģ�������� ����Ѵ�.
*/
int main(void) {
	int num1, num2;

	printf("���� 2�� �Է�");
	scanf("%d %d", &num1, &num2);

	printf("%d + %d = %d \n",num1,num2,num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
	printf("%d / %d = %d \n", num1, num2, num1 / num2);

	return 0;
}