#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int calc(int v1, int v2, int op)
{
	int result = 0; // �ʱ�ȭ

	switch (op)
	{
	case 1: result = v1 + v2; break;
	case 2: result = v1 - v2; break;
	case 3: result = v1 * v2; break;
	case 4: result = v1 / v2; break;
	default: printf("�߸��� �������Դϴ�.\n"); break;
	}

	return result;
}
void main()
{
	int res;
	int oper, a, b;

	printf("��� �Է� (1:+, 2:-, 3:*, 4:/) : ");
	scanf_s("%d", &oper);

	printf("����� �� ���ڸ� �Է� : ");
	scanf_s("%d %d", &a, &b);

	res = calc(a, b, oper);

	printf("��� ����� : %d\n", res);
}