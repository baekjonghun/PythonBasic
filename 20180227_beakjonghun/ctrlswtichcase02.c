#include <stdio.h>

int main(void) {
	int nInput = 0;
	char chCredit = 'X';

	printf("������ �Է��Ͻÿ�.:");
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
	printf("����� ������ %c �Դϴ�.", chCredit);


	return 0;
}