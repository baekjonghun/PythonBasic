#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

struct Person {
	char name[20];
	int age; 
	char address[100];

};

int main(void) {

 struct Person p2 = { .name = "������" ,.age = 30 ,.address = "�ּ�2" };

	struct  Person p1; //����ü ���� 

	//������ ����ü ����� �����Ͽ� �� �Ҵ�
	strcpy(p1.name ,"��浿" );
	p1.age = 20;
	strcpy(p1.address, "�ּ�1");


	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);
	printf("�ּ�: %s\n", p1.address);


	printf("�̸�: %s\n", p2.name);
	printf("����: %d\n", p2.age);
	printf("�ּ�: %s\n", p2.address);


	return 0;
}