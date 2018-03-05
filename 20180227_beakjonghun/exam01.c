#include <stdio.h>
int main(void) {
	 float num;//실수 이므로 float 사용
	 float result;

	 printf(" 실수 하나 입력"); //double 일시에는 %lf 사용   (long double 일시에 %Lf)
	 scanf("%lf", &num); //scanf 는  따로 쓰도록 함.    
//	 fflush(stdin) //입력 버퍼 청소


	 result = num * num;
	 printf("%0.2f", result);

	 //scanf 입력 형식 

	return 0;
}
