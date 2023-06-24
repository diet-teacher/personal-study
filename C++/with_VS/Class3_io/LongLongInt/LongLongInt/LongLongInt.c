#include <stdio.h>

int main(void)
{
	// 부호가 있는 64비트 정수형 변수 선언 및 정의
	long long int lldData = 4294967295LL;

	// 64비트 정보를 32비트 형식 문자로 출력
	printf("64비트 정보를 32비트 d형식 으로 출력 %d\n", lldData);
	printf("64비트 정보를 32비트 u형식 으로 출력 %u\n", lldData);

	// 32비트로는 표현할 수 없는 범위의 정보를 출력해본다.
	// 제대로 된 결과를 기대할 수 없다.
	printf("4294967295LL + 1 u형식 %u\n", lldData + 1);
	printf("4294967295LL + 2 u형식 %u\n", lldData + 2);
	printf("4294967295LL + 3 u형식 %u\n", lldData + 3);

	// 64비트 정보를 64비트 형식 문자(%lld)로 출력
	printf("4294967295LL + 1 lld형식 %lld\n", lldData + 1);
	printf("4294967295LL + 2 lld형식 %lld\n", lldData + 2);
	printf("4294967295LL + 3 lld형식 %lld\n", lldData + 3);

	return 0;
}