#include <stdio.h>
/*
작성일:2018-03-01
작성자:백종훈
-내 용-
활용 : longlongint
*/

int main(void) {

	long long int lldData = 4294967295LL;

	//64bit -> 32bit
	printf("%d\n", lldData); //-1
	printf("%u\n", lldData); //4294967295

	//32bit 표현 불가능 범위 출력~~  제대로 된 결과값이 아니다.
	printf("%u\n", lldData + 1); //0
	printf("%u\n", lldData + 2); //1
	printf("%u\n", lldData + 3); //2

	//64bit intfo (%lld) 제대로 출력됨.
	printf("%lld\n", lldData + 1);
	printf("%lld\n", lldData + 2);
	printf("%lld\n", lldData + 3);

		return 0;
}