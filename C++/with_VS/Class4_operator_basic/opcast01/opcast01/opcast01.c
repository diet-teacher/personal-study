#include <stdio.h>

int main(void)
{
	int x = 5;

	printf("int / int = int 5 / 2 = %d\n", 5 / 2);
	printf("double / int = double 5.0 / 2 = %f\n", 5.0 / 2);
	printf("int / double = double 5 / 2.0 = %f\n", 5 / 2.0);
	printf("double / int = double (double)5 / 2 = %f\n", (double)5 / 2);
	printf("double / int = double (double)x / 2 %f\n (x = 5)", (double)x / 2);
	printf("int / double = double x / double(2) %f\n (x = 5)", x / (double)2);
	printf("double / double = double (double)(x / 2) %f\n (x = 5)", (double)(x / 2));
	return 0;
}