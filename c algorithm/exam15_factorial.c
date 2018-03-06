/*
날짜:2018-03-06
이름:백종훈
펙토리얼
*/

#include <stdio.h>

int factorial(int n);

int main(void) {

	int userNum = 0;

	scanf_s("%d", &userNum);

	printf("%d", factorial(userNum));
	return 0;

}

int factorial(int n) {
	int result = 1;
	int i = 0;

	for (i = 1; i <= n; ++i) {
		result *= i;

	}

	return result;
}