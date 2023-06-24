#include <stdio.h>

int main(void)
{
	int nInput = 0, nMax = 0;
	scanf_s("%d", &nInput);
	if (nInput > nMax)
	{
		nMax = nInput;
	}
	scanf_s("%d", &nInput);
	if (nInput > nMax)
	{
		nMax = nInput;
	}
	scanf_s("%d", &nInput);
	if (nInput > nMax)
	{
		nMax = nInput;
	}
	printf("Max : %d", nMax);
	return 0;
}