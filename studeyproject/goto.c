/*
goto ���� ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1 = 0; 
	scanf_s("%d", &num1);

	if (num1 == 1) {
		goto ONE;
	}
	if (num1 == 2) {
		goto TWO;
	}	if (num1 == 3) {
		goto EXIT;
	}

ONE: printf("1�Դϴ�. \n");
	goto EXIT;
TWO: printf("2�Դϴ�. \n");
	goto EXIT;
EXIT:return 0;

		
}