#include <stdio.h>

int main(void)
{
	123.0;		//double;
	123.0F;		//float;

	printf("%f\n", 123.45F);
	printf("%f\n", 123.45);
	printf("%f\n", 2147483648.0F);
	printf("%f\n", 2147483648.0F - 20);
	printf("%f\n", 2147483648.0F - 40);
	printf("%f\n", 2147483648.0F - 60);
	printf("%f\n", 2147483648.0F - 64);
	printf("%f\n", 2147483648.0F - 65);
	printf("%f\n", 247483.0F - 65);
	printf("%f\n", 2474838.0F - 65);

	printf("\nfloat type은 소수점 이하 6자리 \ndouble type은 소수점 이하 15자리 까지만 제대로 작동한다. \n부동 소수점 오차 때문\n");
	return 0;
}