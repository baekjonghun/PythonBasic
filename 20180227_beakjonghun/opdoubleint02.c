#include <stdio.h>
/*
�ۼ���:������
�ۼ���:2018-02-28
����:���� ������ ������
����:
*/
int main(void) {

	int x = 10;
	printf("%d \n", x * 10);
	printf("%d \n", x * 10.0); //int * double ��� �Ұ���

	printf("%d\n", x / 10);

	printf("%d\n",5/ 2);
	printf("%f\n", 5 / 2); //2 -> 0.000000

	printf("%f\n",5.0 / 2); //double/int  -> double 
	
	/*
	result
100
0
1
2
0.000000
2.500000*/
	return 0;
}