#include <stdio.h>

int main(void) {
	int i = 0;

	for (i = 0; i < 10; ++i) {
		if (i > 4) {
			continue; //continue �� ������ ���� �θ� �ݺ��� �̵� 
		}
		printf("%dth \n",i);
	}
	printf("%dth \n",i); //10
	return 0;
}