#include <stdio.h>
/*
�ۼ���:������
�ۼ���:2018-02-28
����:����ȯ
����:���������� ��� 0���� ��ȯ Ư����Ʈ�� And �� ������.
�� �ʿ��� ������ �̾� ���� ���ʿ��� ���� ���� 
*/
int main(void) {

	int nData = 0x11223344;

	printf("%08X\n", nData & 0xFFFF0000);
    printf("%08X\n", nData & 0x00FFFF00);	
	printf("%08X\n", nData & 0x0000FFFF);
	printf("%08X\n", nData & 0xFF0000FF);

	return 0;
	/*
	result
	11220000
	00223300
	00003344
	11000044
	*/
}