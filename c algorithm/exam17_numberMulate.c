/*
작성일:2018-03-06
작성자:백종훈
문제: 사용자 입력 누적합계
*/

#include <stdio.h>
int main(void) {
	int sumNum = 0;
	int userNum = 0;
	printf("NumberInput[Exit 0Input]");
	
	while (1) {
		scanf_s("%d", &userNum);
		sumNum += userNum;
		if (userNum == 0) {
			printf("프로그램이 정상 종료 되었습니다.");
			printf("합계는 %d입니다.", sumNum);
			goto EXIT;
		}
	}



	EXIT:return 0;
}