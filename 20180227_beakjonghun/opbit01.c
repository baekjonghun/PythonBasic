#include <stdio.h>

int main(void) {
	int nData = 0x11223344;

	printf("%08X\n", nData & 0x00FFFF00); //And
	printf("%08X\n", nData | 0x00FFFF00); //or
	printf("%08X\n", nData ^ 0x00FFFF00); //Xor
	printf("%08X\n", ~nData); //1�� ����
	printf("%08x\n", nData >> 8); //8��Ʈ ����Ʈ ������
	printf("%08x\n", nData << 16); //16��Ʈ ����Ʈ ������ 

	return 0;
}