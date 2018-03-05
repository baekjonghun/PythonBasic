/*
작성자:백종훈
작성일:20118-03-05
제 목:익명 구조체 사용하기
*/
#define _CRT_SECURE_NO_WARNINGS    // strcpy 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일

typedef struct 
{
	char name[20];
	int age; 
	char adderss[100];

}Person;

int main(void) {
	Person p1;

	strcpy(p1.name, "백종훈");
	p1.age = 20; 
	strcpy(p1.adderss, "주소1");

	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("주소: %s\n", p1.adderss);
	return 0;
}