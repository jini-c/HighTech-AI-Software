#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b, c ,d;
	int result;

	printf("첫 번째 계산할 값을 입력하세요 ==>");
	scanf("%d", &a);
	printf("두 번째 계산할 값을 입력하세요 ==>");
	scanf("%d", &b);
	printf("세 번째 계산할 값을 입력하세요 ==>");
	scanf("%d", &c);
	printf("네 번째 계산할 값을 입력하세요 ==>");
	scanf("%d", &d);

	result = a + b + c + d;

	printf("계산 결과는 %d입니다.\n", result);
	printf("계산 결과는 %d입니다.\n", a + b + c + d);
}