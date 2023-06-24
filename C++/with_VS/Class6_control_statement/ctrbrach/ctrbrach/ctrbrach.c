#include <stdio.h>

int main(void)
{
	int nAge = 0;

	printf("나이를 입력하세요. : ");
	scanf_s("%d", &nAge);

	// if문 시작
	if (nAge >= 20)
	{
		// 조건식을 만족한 경우에만 실행하는 구문
		//여러 구문을 실행해야 한다면 반드시 블록 스코프로 묶는다.
		printf("당신의 나이는 %d세입니다.\n", nAge);
		nAge = 33;
	} // if문 끝
	printf("내 나이는 %d세 입니다.\n", nAge);
	return 0;
}