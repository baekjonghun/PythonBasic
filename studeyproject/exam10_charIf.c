#include <stdio.h>


int main(void) {
	char chNum = 0;

	printf("���� ����(0~9���� a~z, A~Z)���� �Է��Ͻÿ�,");

	scanf_s("%c",&chNum,sizeof(chNum));

	if (chNum >= 48 && chNum <= 57) {
		printf("����:num = %c", chNum);
	}
	else if (chNum >= 97 && chNum <= 122 || chNum >= 65 && chNum <= 90) {
		printf("����:chNum = %c", chNum);
	}
	else {
		printf("�߸��Է� �ϼ˽��ϴ�. \n �ٽ��Է����ֻ���.");
	}
	
	return 0;
}