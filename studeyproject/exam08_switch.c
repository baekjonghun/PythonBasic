/*
�ۼ���:������
�ۼ���:2018-03-05
����: switch ���� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int sum(int num1, int num2); //��Ģ���� ����ü ����
int min(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int sum(int num1, int num2) {//�Լ� ����

	return num1 + num2;
}
int min(int num1, int num2) {

	return num1 - num2;
}
int mul(int num1, int num2) {

	return num1 * num2;
}
int div(int num1, int num2) {

	return num1 / num2;
}

int main(void) { //main
       
	char textCounter = 0; //��Ģ���� ����
	int num1, num2 = 0;   //����2�� ����


	printf("��Ģ������ �ϳ��� �Է��Ͻÿ�.[+, - .*. /]");
	textCounter = _getch(); //�ٷ� ���� 
	printf("����2 ���� �Է��Ͻÿ�.");
	scanf_s("%d %d", &num1, &num2);

	switch (textCounter){ //���û����� �����Ƿ� switch case ~ ���� �����.

	case '+':
		printf("num1+num2 = %d", sum(num1, num2));
		break;
	case '-':
		printf("num1-num2 = %d", min(num1, num2));
		break;
	case '*':
		printf("num1*num2 = %d", mul(num1, num2));
		break;
	case '/':
		printf("num1/num2 = %d", div(num1, num2));
		break;
	default:
		printf("����� �Ϸ�Ǿ����ϴ�. \n");
		break;
	}



	return 0;
}

