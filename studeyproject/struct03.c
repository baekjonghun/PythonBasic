/*
typedef�� struct Ű���� ���� ����ü �����ϱ�

typedef struct ����ü�̸� {
�ڷ��� ����̸�;
} ����ü��Ī;
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

	strcpy_s(p1.name  ,"ȫ�浿");
	p1.age = 20;
	strcpy_s(p1.address, "�ּ�");

	printf("�̸�: %s", p1.name);
	printf("����: %d", p1.age);
	printf("�ּ�: %s", p1.address);
	return 0;
}