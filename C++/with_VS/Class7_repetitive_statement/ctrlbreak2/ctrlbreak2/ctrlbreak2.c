#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	// 5회 반복되는 바깥쪽 반복문
	for (i = 0; i < 5; ++i)
	{
		printf("i == %d\n", i);

		//5회 반복 도건을 갖춘 안쪽 반복문
		for (j = 0; j < 5; ++j)
		{
			//break문이 적용되면 안쪽 반복문을 즉시 끝낸다.ㅣ
			if (j > 2)
				break;
			printf("\t%dth\n", j);
		}

		printf("end\n\n");
	}

	return 0;
}