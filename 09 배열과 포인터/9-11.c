#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b, tmp;
	int *p1, *p2;

	printf("a �� �Է�: "); //a,b �� �Է�
	scanf("%d", &a);
	printf("b�� �Է�:");
	scanf("%d", &b);

	p1 = &a;
	p2 = &b;

	tmp = *p1; //a�� ���� tmp�� ����
	*p1 = *p2; //b�� ���� a�� ����
	*p2 = tmp; //tmp�� ���� b�� ����

	printf("�ٲ� �� a�� %d, b�� %d \n", a, b);
}