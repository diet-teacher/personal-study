#include <stdio.h>

int main()
{
	char ch = 0;

	getchar();
	ch = getchar();

	putchar(ch);

	float f = 123.456789123;
	printf("\nf = %015.12g\n", f);


	return 0;
}