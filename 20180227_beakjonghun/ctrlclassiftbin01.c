/*
�ۼ���:������
�ۼ���:2018-02-28
����:if �� ���
*/
#include <stdio.h>

int main(void) {

	int nInput = 0;
	char ch = 'A';

	printf("������ �Է��Ͻÿ�.");
	scanf_s("%d", &nInput);

	if (nInput >= 80) {
		if (nInput >= 90) {
			ch = 'A';
		}
		else {
			ch = 'B';
		}

	}
	else {
		if (nInput >= 70) {
			ch = 'C';
		}
		else {
			ch = 'D';
			if (nInput < 60) {
				ch = 'F';
			}

		}
	}
	printf("����� ������ %c �Դϴ�.", nInput);

	return 0;
}