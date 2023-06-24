#include <stdio.h>

int main(void)
{
	int s = 0;
	printf("초(second)를 입력하세요. :");
	scanf_s("%d", &s);
	int h = s / 3600;
	int m = (s - 3600 * h);

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", s, s / 3600, (s % 3600) / 60, (s % 3600) % 60);
	return 0;
}
