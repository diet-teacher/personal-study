#include <stdio.h>

int main(void)
{
	int nData = 0x11223344;

	printf("%08X\n", nData & 0x00FFFF00);
	printf("%08X\n", nData | 0x2211FFFF);
	printf("%08X\n", nData ^ 0x2211FFFF);
	printf("%08X\n", ~nData);
	printf("%08X\n", nData >> 8);
	printf("%08X\n", nData << 16);
	printf("%08X\n", nData >> 24);
	printf("%08X\n", nData << 28);

	printf("%08X\n", 0xFFFFFFFF & 0x00080000);
	printf("%08X\n", 0xAAAABBBB & 0x00080000);
	printf("%08X\n", 0xAABBCCDD & 0x00080000);

	printf("%08X\n", 0xFFFFFFFF | 0x00080000);
	printf("%08X\n", 0x11223344 | 0x00080000);
	printf("%08X\n", 0x00000000 | 0x000F0000);



	return 0;
}