//복합대입 연산자.

int main(void) {
	int nResult = 0, nData = 10;

	nResult += 3;
	printf("%d\n", nResult);

	nResult *= 3;
	printf("%d\n", nResult);

	nResult /= 2;
	printf("%d\n", nResult);

	nResult -= nData - 5;
	printf("%d\n", nResult);

	nResult %= 3;
	printf("%d\n", nResult);
	return 0;
}