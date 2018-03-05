#include <stdio.h>

int num = 5;
int static num2 = 0;
void incrPtint(void);


void incrPrint(void) {
	int num = 1;
	num++;
	printf("incrPrint(): num의 값 --> %d \n", num); //함수가 끝나면 내용이 사라짐.
}


int main(void) {
	num = 10;

	printf("num: %d \n", num);
	incrPrint();
	incrPrint();
	incrPrint();
	printf("num: %d \n", num);

	return 0;
}