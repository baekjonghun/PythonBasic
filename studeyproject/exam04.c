/*
작성일:2018.03.05
작성자:백 종 훈
제목 : 함수의 사용
*/
#include <stdio.h>

int sum(int);
int min(int);
int mul(int);
int div(int);
void square(int num);


//----------문제 7. -----------------------
void square(int num) {
	printf("num * num = %d ", num * num );

}

//----------문제 9. -----------------------
int sum(int num1, int num2) {

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


int main(void) {

	int num1, num2 = 0;

	scanf_s("%d %d", &num1, &num2);
	
	printf("num1 + num2 = %d \n" , sum(num1, num2));
	printf("num1 - num2 = %d \n", min(num1, num2));
	printf("num1 * num2 = %d \n", mul(num1, num2));
	printf("num1 / num2 = %d \n", div(num1, num2));
	square(3);

	return 0;
}