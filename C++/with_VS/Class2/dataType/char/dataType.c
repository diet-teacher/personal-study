#include <stdio.h>

#include <float.h>

int main(void)
{
	char a = 'A';
	wchar_t wch = L'A';
	short sData = 10;
	int nData = 10;
	long lData = 10L;
	long int lnData = 10L;
	long long int llnData = 10LL;

	unsigned char byNewData = 0;
	unsigned short sNewData = 65535U;
	unsigned int uNewData = 1U;
	unsigned long int ulNewData = 1UL;
	unsigned long long int ullNewData = 1ULL;


	/*unsigned short sNewData = 65536U;
	unsigned int uNewData = -1U;*/      //자료 타입의 범위를 넘어서기 때문에 에러 발생

	double dData = 123.456;

	printf("%f\n", dData);
	printf("%E - %E\n", DBL_MIN, DBL_MAX);

	char ch1 = 'A', ch2 = 'B', ch3 = 'C';
	char szData[4] = { 'A', 'B', 'C' };
	char szNewData[4] = { "ABC" };


	//char szBuffer[12] = { 'H', 'e', 'l' };
	char szBuffer[12] = {"Hel"};
	puts(szBuffer);

	return 0;
}