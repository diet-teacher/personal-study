﻿#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	i = 2;
	while (i <= 9)
	{
		j = 1;
		while (j <= 9)
		{
			printf("%d * %d = %d\n", i, j, i * j);
			/*계수기를 증가시킨다.
			따라서 언젠가는 반복이 끝나는 조건에 도달한다.*/
			++j;
		}

		putchar('\n');
		++i;
	}

	return 0;
}