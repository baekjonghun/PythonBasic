#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�Լ���: increme
/* �μ��� 1 ������ �� ���� */
//�Ű����� 
int increment(int n) {
	//
	n += 1;
	printf("�Լ� ������ ���� \n");
	return n;
}

double sum(double num1, double num2) {
	double result = num1 + num2;
	printf("���ϱ� ���α׷��Դϴ�,\n");
	return result;
}

/*
 function Name:stdPrint
 variable: my_age(int), my_height(float) , my_Kg (float) 
 resturn type:*/

void stdPrtint(int my_age, float my_height, float my_Kg) {

	printf("���̴� %d age , Ű�� %0.2f Kg , �����Դ� : %0.2f Kg �Դϴ�. \n", my_age, my_height, my_Kg);
	return 0;
}


double colculator(int num1, char ch, int num2) {

	int result = 0;
	if (ch == '+') {
		result = num1 + num2;
	}
	else if (ch == '-') {
		result = num1 - num2;
		}
	else if (ch == '*') {
		result = num1 * num2;
	}
	else if (ch == '/') {
		result = num1 * num2;
	}
	else if (ch == '%') {
		result = num1 * num2;
	}
	return result;
}


int numRe(int num1) {
	return num1;
}


void gugudan(void) {
	
	for (int i = 2; i <= 9; i++) {
		printf("\n");
		for (int j = 1; j <= 9; j++) {
			printf("[%d * %d = %d] ", i, j, (i * j));
		}
	}
	return 0;
}

void star(void) {
	return 0;
}

int main(void) {
	int result = increment(3);                                                                                                  
	printf("%d \n",result);
   
	double re = sum(2.1, 2.1);
	printf("%0.2f \n", re);

	stdPrtint(23, 178.0, 70.0);

	printf("%0.2f \n",colculator(3, '+', 3));

	gugudan();

	int num = 0;
	scanf("%d", &num);
	printf("%d �� ��ȯ �޾ҽ��ϴ�.",  numRe(num));

	return 0;
}