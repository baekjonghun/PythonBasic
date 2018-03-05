#include <stdio.h>

int main(void) {

	int nInput; 

INPUT:
	printf("Input number :");
	scanf_s("%d", &nInput);
	//사용자가 0 ~ 10 범위에 없으면 Input 레이블로 범위 변경 
	if (nInput < 0 || nInput > 10) {
		goto INPUT;
	}
	puts("End");
	return 0;
}