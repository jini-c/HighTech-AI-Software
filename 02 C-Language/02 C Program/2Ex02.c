#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	int result;
	int k;

	printf(" ù ��° ����� ���� �Է��ϼ��� ==>");
	scanf("%d", &a);
	printf("<1> ���� <2> ���� <3> ���� <4> ������\n");
	scanf("%d", &k);
	printf(" �� ��° ����� ���� �Է��ϼ��� ==>");
	scanf("%d", &b);

	if (k == 1)
	{
		result = a + b;
		printf("������ ����� %d�Դϴ�.\n", result);
	}
	else if (k == 2)
	{
		result = a - b;
		printf("������ ����� %d�Դϴ�.\n", result);
	}
	else if (k == 3)
	{
		result = a * b;
		printf("������ ����� %d�Դϴ�.\n", result);
	}
	else if (k == 4)
	{
		result = a / b;
		printf("�������� ����� %d�Դϴ�.\n", result);
	}
	else
	{
		printf("�߸��� �����Դϴ�.\n");
}