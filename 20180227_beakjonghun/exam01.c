#include <stdio.h>
int main(void) {
	 float num;//�Ǽ� �̹Ƿ� float ���
	 float result;

	 printf(" �Ǽ� �ϳ� �Է�"); //double �Ͻÿ��� %lf ���   (long double �Ͻÿ� %Lf)
	 scanf("%lf", &num); //scanf ��  ���� ������ ��.    
//	 fflush(stdin) //�Է� ���� û��


	 result = num * num;
	 printf("%0.2f", result);

	 //scanf �Է� ���� 

	return 0;
}
