#include <stdio.h>
/*
�ۼ���:������
�ۼ���:2018-02-28
����:if �� 
*/
int main(void) {

	int nAge = 0;
	printf("���̸� �Է��Ͻÿ�.: ");
	scanf("%d", &nAge);

	if (nAge >= 20) {
		printf("����� ���̴� %d�� �Դϴ�.", nAge);
	}

	puts("End");
	return 0;
}