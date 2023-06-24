#include <stdio.h>

int main(void)
{
	int nInput = 0;

	printf("키를 입력하세요. : ");
	scanf_s("%d", &nInput);
	printf("결과 : %s\n", nInput >= 150 ? "합격" : "불합격");
	return 0;
}