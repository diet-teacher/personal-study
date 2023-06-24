#include <stdio.h>

int main(void)
{
	
	char ilist1[] = { 1,2,3,4,5,6,7,8 };
	char ilist2[5] = { 1,2,3,4,5 };
	int ilist3[5] = { 0 };

	ilist3[0] = 5;
	ilist3[1] = 2;
	ilist3[2] = 3;
	ilist3[3] = 4;
	ilist3[4] = 1;

	printf("ilist1 = %d\n", ilist1);
	printf("ilist2 = %d\n", ilist2);
	printf("ilist3 = %d\n", ilist3);


	char str1[10] = "abcde";
	char str2[10] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);

	str1[5] = 'j';
	str1[6] = 'm';
	str1[7] = 'w';
	str1[8] = 'w';
	str1[9] = 'g';
	str1[9] = 'r';
	printf("str1 = %s\n", str1);
	
	return 0;
}