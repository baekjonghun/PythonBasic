/*
작성일:2018-03-01
작성자:백종훈
-내 용-
반올림하여 출력하기 double printf 사용
*/
#include <stdio.h>
int main(void) {

	double dData = 123.456;
	printf("%f, %f\n", dData, -123.456);
	printf("%.1f\n",dData);
	printf("%.2f\n", dData);
	printf("%.3f\n", dData); //반올림 하고 3째 자리 까지 출력

	printf("%8d\n", 123);


	printf("%12.3f\n", 123); //소수점 포함 12자리 까지 출력, 소수점 이하4자리에서 반올림.
	printf("%012.3f\n", 123);
	//가급적 정확한 데이터는 정수형으로 비교하는 것이 좋다.
	return 0;
}
