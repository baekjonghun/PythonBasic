#include <stdio.h>
/*
�ۼ���:2018-03-01
�ۼ���:������
-�� ��-
Ȱ�� : longlongint
*/

int main(void) {

	long long int lldData = 4294967295LL;

	//64bit -> 32bit
	printf("%d\n", lldData); //-1
	printf("%u\n", lldData); //4294967295

	//32bit ǥ�� �Ұ��� ���� ���~~  ����� �� ������� �ƴϴ�.
	printf("%u\n", lldData + 1); //0
	printf("%u\n", lldData + 2); //1
	printf("%u\n", lldData + 3); //2

	//64bit intfo (%lld) ����� ��µ�.
	printf("%lld\n", lldData + 1);
	printf("%lld\n", lldData + 2);
	printf("%lld\n", lldData + 3);

		return 0;
}