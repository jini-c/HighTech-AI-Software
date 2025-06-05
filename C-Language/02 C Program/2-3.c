#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	int result;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("첫 번째 계산할 값을 입력하세요==>");
	scanf("%d", &a);

	printf("두 번째 계산할 값을 입력하세요==>");
	scanf("%d", &b);

	result = a + b;
	printf("두 수의 합은 %d입니다.\n", result);

	result = a - b;
	printf("두 수의 차는 %d입니다.\n", result);

	result = a * b;
	printf("두 수의 곱은 %d입니다.\n", result);

	result = a / b;
	printf("두 수의 나누기는 %d입니다.\n", result);
}