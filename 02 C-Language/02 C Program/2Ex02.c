#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	int result;
	int k;

	printf(" 첫 번째 계산할 값을 입력하세요 ==>");
	scanf("%d", &a);
	printf("<1> 덧셈 <2> 뺄셈 <3> 곱셈 <4> 나눗셈\n");
	scanf("%d", &k);
	printf(" 두 번째 계산할 값을 입력하세요 ==>");
	scanf("%d", &b);

	if (k == 1)
	{
		result = a + b;
		printf("덧셈의 결과는 %d입니다.\n", result);
	}
	else if (k == 2)
	{
		result = a - b;
		printf("뺄셈의 결과는 %d입니다.\n", result);
	}
	else if (k == 3)
	{
		result = a * b;
		printf("곱셈의 결과는 %d입니다.\n", result);
	}
	else if (k == 4)
	{
		result = a / b;
		printf("나눗셈의 결과는 %d입니다.\n", result);
	}
	else
	{
		printf("잘못된 선택입니다.\n");
}