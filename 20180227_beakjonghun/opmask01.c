#include <stdio.h>
/*
작성자:백종훈
작성일:2018-02-28
제목:형변환
설명:일정구간이 모두 0으로 변환 특정비트에 And 를 유지함.
꼭 필요한 정보만 뽑아 내고 불필요한 정보 제거 
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