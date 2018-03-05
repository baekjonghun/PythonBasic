#include <stdio.h>
/*
작성자:백종훈
작성일:2018-02-28
제목:문자열에 공백문자 입력 받기 
설명:공백 문자를 입력 받기 위해서는 두개를 쓰지 않는다.
*/
int main(void) {

	char szBufferLeft[32] = { 0 };
	char szBufferRight[32] = { 0 };

	scanf("%s %s",szBufferLeft, szBufferRight);

	printf("%s %s", szBufferLeft, szBufferRight);


	return 0;
}