#include <stdio.h>
/*
�ۼ���:������
�ۼ���:2018-02-28
����:Sizeof ������
*/
int main(void) {
	int nData = 10;

	printf("%d , %d, %d\n", sizeof(5), sizeof(nData), sizeof(int));
	printf("%d , %d\n", sizeof('A'), sizeof(char));

	printf("%d , %d\n", sizeof(123.45F), sizeof(123.45));
	printf("%d , %d\n", sizeof(nData + 10), sizeof(++nData));
	return 0;
}