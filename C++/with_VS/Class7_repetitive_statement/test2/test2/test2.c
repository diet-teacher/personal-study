#include <stdio.h>

int main(void)
{
	int i = 0, j = 0;

	i = 5;
	
	while (i > 0)
	{
		j = 5;
		while (j > 0 )
		{
			printf("*");
			putchar('\t');
			--j;
		}
		putchar('\n');
		--i;
	}
	return 0;
}