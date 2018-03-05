#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//함수명: increme
/* 인수가 1 증가된 값 리턴 */
//매개변수 
int increment(int n) {
	//
	n += 1;
	printf("함수 내에서 실행 \n");
	return n;
}

double sum(double num1, double num2) {
	double result = num1 + num2;
	printf("더하기 프로그램입니다,\n");
	return result;
}

/*
 function Name:stdPrint
 variable: my_age(int), my_height(float) , my_Kg (float) 
 resturn type:*/

void stdPrtint(int my_age, float my_height, float my_Kg) {

	printf("나이는 %d age , 키는 %0.2f Kg , 몸무게는 : %0.2f Kg 입니다. \n", my_age, my_height, my_Kg);
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
	printf("%d 를 반환 받았습니다.",  numRe(num));

	return 0;
}