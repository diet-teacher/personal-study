#include <stdio.h>

int main(void)
{
	int nInput = 0;
	scanf_s("%d", &nInput);
	if (nInput > 9)
	{
		nInput = 9;
	}
	else if (nInput < 1)
	{
		nInput = 1;
	}
	while (nInput > 0)
	{
		printf("*");
		nInput -= 1;
	}
	printf("\n");
	return 0;
}