﻿#include <stdio.h>

int main(void)
{
	int nAge = 0;
	double fee = 1000.0;
	scanf_s("%d", &nAge);

	if (nAge >= 14)
	{
		if (nAge > 19)
		{
			fee = fee * 1.0;
		}
		else
		{
			fee = fee * 0.75;
		}
	}
	else
	{
		if (nAge >= 4)
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