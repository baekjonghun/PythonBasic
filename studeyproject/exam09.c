#include <stdio.h>

int main(void) {

	int num; 
	int abs;

	printf("정수입력");
	scanf_s("%d", &num);

	if (num == 0) {
		printf("제로입니다. \n");
	}
	else if (num > 0) {
		printf("양수입니n.\n");
	}
	else {
		 printf("음수입니다.");
		// abs = (num > 0) ? num : num*(-1);//상수
	}

	/*
	if (num> 0) {
		abs = num; 

	}
	else {
		abs = num*(-1);
	}
	*/
	
	return 0;
}