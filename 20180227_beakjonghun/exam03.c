#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//����5
	printf("������ �����ؼ� 2�� �Է��Ͻÿ�/");

	int num1, num2;
	int sum;
	double avr;

	scanf("%d %d", &num1, &num2);

	sum = num1 + num2;
	avr = sum / 2;

    printf("�Է¹��� ��1:%d , ��2:%d \n", num1, num2);
	printf("�� : %d \n", sum);
	printf("���: %0.1f \n", avr);


	return 0;
}