#include <stdio.h>
/*
�ۼ���:������
�ۼ���:2018-02-28
����:����ȯ
����:��ǻ�ʹ� ���ڸ� int �� �ν���.
*/
int main(void) {

	char ch = 'A';
	printf("%c \n", ch); //A

	printf(ch + 1); //B
	printf('A' + 2); //C
	printf("%d\n", 5.0 + 2); //0 int double �� ���ߵ��� ����.
	printf("%f\n", 5.0 + 2); //7.0000000

	return 0;
}