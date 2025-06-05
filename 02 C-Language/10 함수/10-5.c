#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int calc(int v1, int v2, int op)
{
	int result = 0; // 초기화

	switch (op)
	{
	case 1: result = v1 + v2; break;
	case 2: result = v1 - v2; break;
	case 3: result = v1 * v2; break;
	case 4: result = v1 / v2; break;
	default: printf("잘못된 연산자입니다.\n"); break;
	}

	return result;
}
void main()
{
	int res;
	int oper, a, b;

	printf("계산 입력 (1:+, 2:-, 3:*, 4:/) : ");
	scanf_s("%d", &oper);

	printf("계산할 두 숫자를 입력 : ");
	scanf_s("%d %d", &a, &b);

	res = calc(a, b, oper);

	printf("계산 결과는 : %d\n", res);
}