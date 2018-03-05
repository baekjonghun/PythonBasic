/*
Day::::2018. 02 27 
작성자:JongHunBeak
*/

#include <stdio.h>

int main(void) {

	//문제 1. 
	printf("Programmng! It's fun \n");


	//문제2.

	printf("%10s  %s  %s \n %9s  %5d  %5d \n  %8s  %5d  %5d \n","item","count","price","pen",5,1000,"note",25,950);

	//문제 3.
		printf("\"너 자신을 알라 \" 라고 소크라 테스는 말했다.\n  일이70%% 진행되었다. \n c:\\temp 폴더에 복사한다. \n");

     //문제4
		int val;
	
		val = 1 + 2; /* ~~~   */
		printf("1+2=%d \n", val);
	
		val = 2 + 3;
		printf("2+3=%d", val);
	



//문제5.

		int val1 = 0;
		int val2 = 0;
		printf("정수를 연속해서 2개 입력하시오.:10 3 \n");
		scanf("%d", val1);
		scanf("%d", val2);
		printf("입력받은 값1:%d 값2:%d \n", val1, val2);
		int sum = val1 + val2;
		float avage = sum / 2;

		return 0;
}
