#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int aa[10000];
	int* p;
	int i, hap = 0;
	int cnt;

	printf(" 입력할 개수는 ? ");
	scanf("%d", &cnt);

	for (i = 0; i < cnt; i++)
	{
		printf(" %d 번째 수는 ? ", i + 1);
		scanf("%d", &aa[i]);
	}

	p = aa; // p는 배열의 시작 주소를 가리킴

	for (i = 0; i < cnt; i++)
		hap = hap + *(p + i);

	printf(" 입력한 수의 합은 %d 입니다.\n", hap);
}