/*
�ۼ���:������
�ۼ���:2018-02-28
����:�� ������ memcmp() , stcmp() ������ �� �ִ�.
*/
#include <stdio.h>

int main(void) {
	int x = 5, y = 10;

	printf("%d\n", x == y); //0
	printf("%d\n", x != y); //1
	printf("%d\n", x > y); //0
	printf("%d\n", x < y); //1

	printf("%d\n", y >= 10); //1
	printf("%d\n", y <= x + 5); //1
	return 0;
}