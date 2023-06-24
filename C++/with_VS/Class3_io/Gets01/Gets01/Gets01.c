#include <stdio.h>

int main(void)
{
	char szName[12] = { "Hello" };
	gets_s(szName, sizeof(szName));

	char yourName[32] = { 0 };
	printf("이름을 입력하세요 :");

	gets_s(yourName, sizeof(yourName));
	printf("당신의 이름은 ");
	puts(yourName);
	puts("입니다.");

	return 0;
}