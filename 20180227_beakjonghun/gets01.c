#include <stdio.h>
/*
�ۼ���:2018-03-01
�ۼ���:������
-�� ��-
Ȱ�� :  ���ڿ� �Է�
*/
int main(void) {

	char chName[32] = { 0 };

	printf("�̸��� �Է��Ͻÿ�.");
	gets_s(chName, sizeof(chName));

	printf("����� �̸���");
	puts(chName);
	puts("�Դϴ�.");
	return 0;
}