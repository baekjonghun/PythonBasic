#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

struct Person {
	char name[20];
	int age; 
	char address[100];

};

int main(void) {

 struct Person p2 = { .name = "백종훈" ,.age = 30 ,.address = "주소2" };

	struct  Person p1; //구조체 선언 

	//점으로 구조체 멤버에 접근하여 값 할당
	strcpy(p1.name ,"헝길동" );
	p1.age = 20;
	strcpy(p1.address, "주소1");


	printf("이름: %s\n", p1.name);
	printf("나이: %d\n", p1.age);
	printf("주소: %s\n", p1.address);


	printf("이름: %s\n", p2.name);
	printf("나이: %d\n", p2.age);
	printf("주소: %s\n", p2.address);


	return 0;
}