#include <stdio.h>

int main(void)
{
	int x = 10;

	// int * int -> %d
	printf("x = 10\n x * 10 = int %d\n", x * 10);
	// int * double -> %d 출력 불가능
	printf("x * 10.0 = %d double 'd'출력불가 \n", x * 10.0);

	/*int는 int형식이다. 실수 형식이 아니라는 점에 주의하자
	단, 소수점 이하는 절사된다.*/
	printf("x / 10 = %d\n", x / 10);

	// int 나누기 int는 int 형식이므로 %f로 출력 불가
	printf("5 / 2를 d형식으로 출력 %d\n", 5 / 2);
	// 소수점 이하가 절삭되므로 사실상 정수 2를 %f로 출력하는 것이다.
	printf("5 / 2를 f형식으로 출력 %f\n", 5 / 2);

	// double 나누기 int는 double 형식이다.

	printf("5.0 / 2를 f형식으로 출력 %f\n", 5.0 / 2);

	printf("f형식으로 2를 출력 %f\n", 2);
	return 0;
}