#include <stdio.h>


int main(void) {
	char chNum = 0;

	printf("값을 숫자(0~9까지 a~z, A~Z)까지 입력하시오,");

	scanf_s("%c",&chNum,sizeof(chNum));

	if (chNum >= 48 && chNum <= 57) {
		printf("숫자:num = %c", chNum);
	}
	else if (chNum >= 97 && chNum <= 122 || chNum >= 65 && chNum <= 90) {
		printf("문자:chNum = %c", chNum);
	}
	else {
		printf("잘못입력 하셧습니다. \n 다시입력해주새요.");
	}
	
	return 0;
}