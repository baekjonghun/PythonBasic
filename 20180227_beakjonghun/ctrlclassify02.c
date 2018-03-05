#include <stdio.h>

int main(void) {
	int nInput = 0;
	char ch = 'A';
	printf("점수를 입력하시오.");
	scanf("%d", &nInput);

	//첫번째 조건에 맞는지 확인한다.
	if (nInput >= 90) {
		ch = 'A';
	}
	else if (nInput >= 80) {
		ch = 'B';
	}
	else if (nInput >= 70) {
		ch = 'C';
	}
	else if (nInput >= 60) {
		ch = 'D';
	}
	else {
		ch = 'F';
	}
	printf("당신의 %d 점수는 학점은 %d 입니다.", nInput, ch);

	return 0;
}