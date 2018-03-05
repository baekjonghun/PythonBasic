/*
작성자:백종훈
작성일:2018-03-05
제목: switch 문의 사용
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int sum(int num1, int num2); //사칙연산 구조체 선언
int min(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int sum(int num1, int num2) {//함수 선언

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
       
	char textCounter = 0; //사칙연산 변수
	int num1, num2 = 0;   //정수2개 선언


	printf("사칙연산중 하나를 입력하시오.[+, - .*. /]");
	textCounter = _getch(); //바로 실행 
	printf("정수2 개를 입력하시오.");
	scanf_s("%d %d", &num1, &num2);

	switch (textCounter){ //선택사항이 많으므로 switch case ~ 문을 사용함.

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
		printf("계산이 완료되었습니다. \n");
		break;
	}



	return 0;
}

