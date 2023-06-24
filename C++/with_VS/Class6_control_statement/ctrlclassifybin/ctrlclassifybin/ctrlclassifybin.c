#include <stdio.h>

int main(void)
{
	int nInput = 0;
	char ch = 'A';

	printf("점수를 입력하세요. :");
	scanf_s("%d", &nInput);

	// 1차 분류 : 전체 경우 중 중간정도의 값으로 분류한다.
	if (nInput >= 80)
	{
		// 2차 상세 분류 A~B
		if (nInput >= 90)
		{
			ch = 'A';
		}
		else
		{
			ch = 'B';
		}
	}
	else
	{
		// 2차 상세 분휴 C~f
		if (nInput >= 70)
		{
			ch = 'C';
		}
		else
		{
			ch = 'D';
			if (nInput < 60) ch = 'F';
		}
	}
	printf("score : %c\n", ch);
	return 0;
}