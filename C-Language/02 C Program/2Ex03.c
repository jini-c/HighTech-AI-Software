#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	int result;
	char k;

	printf("첫 번째 계산할 값 ==> ");
	scanf("%d", &a);
	printf("+=*/% ==>");
	scanf(" %c", &ch);
	printf("두 번째 계산할 값 ==> ");
	scanf("%d", &b);

	if (k == '+')
	{
		result = a + b;
		printf("%d + %d = %d\n", a, b, result);
	}
	else if (k == '-')
	{
		result = a - b;
		printf("%d - %d = %d\n", a, b, result);
	}
	else if (k == '*')
	{
		result = a * b;
		printf("%d * %d = %d\n", a, b, result);
	}
	else if (k == '/')
	{
		if (b != 0)
			result = a / b;
		else
			printf("0으로 나눌 수 없습니다.\n");
	}
	else if (k == '%')
	{
		if (b != 0) {
			result = a % b;
			printf("%d %% %d = %d\n", a, b, result);
		}
		else
			printf("0으로 나눌 수 없습니다.\n");
	}
	else
	{
		printf("잘못된 연산자입니다.\n");

}