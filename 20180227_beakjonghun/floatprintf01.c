/*
�ۼ���:2018-03-01
�ۼ���:������
-�� ��-
�Ǽ��� ���� �Է�
*/
#include <stdio.h>

int main(void) {

	printf("%d\n", sizeof(123.456F));
	printf("%d\n", sizeof(123.456));

	printf("%f\n", 123.456F);
	printf("%f\n", 123.456);
	printf("%lf\n", 123.456); //�� lf �� ������ �ʾƵ� ������ scanf������ lf�������� ���ֵ��� ��.

	/*
	result 
4
8
123.456001
123.456000
123.456000
	*/
	return 0;
}