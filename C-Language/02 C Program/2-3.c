#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	int result;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("ù ��° ����� ���� �Է��ϼ���==>");
	scanf("%d", &a);

	printf("�� ��° ����� ���� �Է��ϼ���==>");
	scanf("%d", &b);

	result = a + b;
	printf("�� ���� ���� %d�Դϴ�.\n", result);

	result = a - b;
	printf("�� ���� ���� %d�Դϴ�.\n", result);

	result = a * b;
	printf("�� ���� ���� %d�Դϴ�.\n", result);

	result = a / b;
	printf("�� ���� ������� %d�Դϴ�.\n", result);
}