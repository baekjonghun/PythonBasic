#include <stdio.h>

int main(void) {
	int nData = 0x11223344;

	printf("%08X\n", nData & 0x00FFFF00); //And
	printf("%08X\n", nData | 0x00FFFF00); //or
	printf("%08X\n", nData ^ 0x00FFFF00); //Xor
	printf("%08X\n", ~nData); //1의 보수
	printf("%08x\n", nData >> 8); //8비트 시프트 연산자
	printf("%08x\n", nData << 16); //16비트 시프트 연산자 

	return 0;
}