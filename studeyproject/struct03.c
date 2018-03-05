/*
typedef로 struct 키워드 없이 구조체 선언하기

typedef struct 구조체이름 {
자료형 멤버이름;
} 구조체별칭;
*/
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>


typedef struct _Person {
	char name[20];
	int age;
	char address[100];
}Person;

int main(void) {
       
	Person p1;

	strcpy_s(p1.name  ,"홍길동");
	p1.age = 20;
	strcpy_s(p1.address, "주소");

	printf("이름: %s", p1.name);
	printf("나이: %d", p1.age);
	printf("주소: %s", p1.address);
	return 0;
}