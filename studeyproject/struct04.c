/*
�ۼ���:������
�ۼ���:20118-03-05
�� ��:�͸� ����ü ����ϱ�
*/
#define _CRT_SECURE_NO_WARNINGS    // strcpy ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>    // strcpy �Լ��� ����� ��� ����

typedef struct 
{
	char name[20];
	int age; 
	char adderss[100];

}Person;

int main(void) {
	Person p1;

	strcpy(p1.name, "������");
	p1.age = 20; 
	strcpy(p1.adderss, "�ּ�1");

	printf("�̸�: %s\n", p1.name);
	printf("����: %d\n", p1.age);
	printf("�ּ�: %s\n", p1.adderss);
	return 0;
}