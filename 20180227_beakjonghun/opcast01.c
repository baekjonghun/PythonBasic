#include <stdio.h>
/*
�ۼ���:������
�ۼ���:2018-02-28
����:���� ������ ������
����:����ȯ
*/
int main(void) {
	int x = 5;

	printf("%d\n",5 /2); //int -> int
	printf("%f\n", 5.0 / 2); //double -> int
	printf("%f\n", 5 / 2.0); //int -> double 
	printf("%f\n", (double)5 / 2); 
	printf("%f\n", (double)x / 2);
	printf("%f\n", 5 / (double)2);
	printf("%f\n", (double) x/ 2);

	/*
	�Ǽ����� ���������� ����ȯ �ϸ� �Ҽ������� ���� ��� ���� 
2
2.500000
2.500000
2.500000
2.500000
2.500000
2.500000
	*/
	return 0;
}