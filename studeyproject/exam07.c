#include <stdio.h>

int main(void) {
	int num = 0;
	printf("정수입력");
	scanf_s("%d", &num);

	if (!(num % 2)) {
		printf("짝수입니다");
	}
	else {
		printf("홀수입니다.");
	}

	if (num < 0) {
		printf("그리고 음수입니다. \ n");
	}
	else {
		if (num == 0) {
			printf("다름아닌 0입니다. \n");
		}
		else {
			printf("그리고 양수 입니다. \n");
		}
	}
	return 0;
}