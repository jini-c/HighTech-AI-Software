#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int data, type;
	printf("입력진수 결정 <1> 10 <2> 16 <3> 8 :");
	scanf_s("%d", &type);
	if (type == 1)
	{
		printf("10진수 입력 : ");
		scanf_s("%d", &data);
	}
	if (type == 2)
	{
		printf("16진수 입력 : ");
		scanf_s("%x", &data);
	}
	if (type == 3)
	{
		printf("8진수 입력 : ");
		scanf_s("%o", &data);
	}
	printf("10진수 : %d\n", data);
	printf("16진수 : %x\n", data);
	printf("8진수 : %o\n", data);
}