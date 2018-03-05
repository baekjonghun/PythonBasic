/*
작성자:백종훈
작성일:2018-02-28
제목:문자열에 공백문자 입력 받기
설명:gets()를 쓰도록함.
*/
#include <stdio.h>
/*
작성자:백종훈
작성일:2018-02-28
제목:문자열에 공백문자 입력 받기
설명:문자열을 입력받기 위해 보안을 신경 쓰도록 함.
*/
int main(void) {

	char name[32] = { 0 };
	int age = 0;
     
	printf("나이를 입력하시오.:");
	scanf_s("%d%*c", &age); //버퍼 비우는법 방법1.scanf_s(%d%*c , &age);
	fflush(stdin); //방법2. 버퍼를 비우도록 함.

	printf("이름을 입력하시오.:");

	gets_s(name , sizeof(name)); 
	printf("이름은 %s 나이는 %d 입니다.", name, age);



	return 0;
}