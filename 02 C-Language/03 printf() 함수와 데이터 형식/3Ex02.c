#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int data, type;
	printf("�Է����� ���� <1> 10 <2> 16 <3> 8 :");
	scanf_s("%d", &type);
	if (type == 1)
	{
		printf("10���� �Է� : ");
		scanf_s("%d", &data);
	}
	if (type == 2)
	{
		printf("16���� �Է� : ");
		scanf_s("%x", &data);
	}
	if (type == 3)
	{
		printf("8���� �Է� : ");
		scanf_s("%o", &data);
	}
	printf("10���� : %d\n", data);
	printf("16���� : %x\n", data);
	printf("8���� : %o\n", data);
}