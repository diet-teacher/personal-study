#include <stdio.h>

int main(void)
{
	double fee = 1000;
	int nAge = 0;
	printf("기본요금 : %.0f원 \n나이를 입력하세요. : ", fee);
	scanf_s("%d", &nAge);

	if (nAge >= 65)
	{
		fee = 0;

	}
	if (nAge < 20)
	{
		if (nAge >= 14)
		{
			fee = fee * 0.75;
		}
		else if (nAge >= 4)
		{
			fee = fee * 0.5;
		}
		else
		{
			fee = 0;
		}
	}
	printf("최종요금 : %.0f원", fee);
}