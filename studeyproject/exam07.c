#include <stdio.h>

int main(void) {
	int num = 0;
	printf("�����Է�");
	scanf_s("%d", &num);

	if (!(num % 2)) {
		printf("¦���Դϴ�");
	}
	else {
		printf("Ȧ���Դϴ�.");
	}

	if (num < 0) {
		printf("�׸��� �����Դϴ�. \ n");
	}
	else {
		if (num == 0) {
			printf("�ٸ��ƴ� 0�Դϴ�. \n");
		}
		else {
			printf("�׸��� ��� �Դϴ�. \n");
		}
	}
	return 0;
}