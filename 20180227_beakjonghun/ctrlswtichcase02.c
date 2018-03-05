#include <stdio.h>

int main(void) {
	int nInput = 0;
	char chCredit = 'X';

	printf("점수를 입력하시오.:");
	scanf("%d", &nInput);

	switch (nInput / 10) {
	case 10: chCredit = 'A';
		break;
	case 9: chCredit = 'A';
		break;
	case 8: chCredit = 'B';
		break;
	case 7: chCredit = 'C';
		break;
	case 6: chCredit = 'D';
		break;
	default : 
		chCredit = 'F';
	}
	printf("당신의 학점은 %c 입니다.", chCredit);


	return 0;
}