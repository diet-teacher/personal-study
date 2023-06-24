#include <stdio.h>

int main(void)
{
	char ch = 'A';

	// char를 %c로 출력
	printf("ch = 'A' %c\n", ch);

	// 'char + int'는 항상 int 형식이다.
	printf("ch + 1 = %c\n", ch + 1);
	printf("'A' + 2 = %c\n", 'A' + 2);

	/*'double + int'는 double 형식이다.
	따라서 %d 형식으로 출력할 수 없다.*/
	printf("5.0 + 2 = %d 'double + int'는 double 형식\n", 5.0 + 2);
	printf("5.0 + 2 = %f\n", 5.0 + 2);
	return 0;
}