#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void gugu(int dan)
{
	int i;

	for (i = 1; i <= 9; i++)
	{
		printf("%2d X %2d = %2d\n", dan, i, dan * i);
	}
}

void main()
{
	int input;

	printf("구구단 몇 단? ");
	scanf("%d", &input);

	gugu(input);
}