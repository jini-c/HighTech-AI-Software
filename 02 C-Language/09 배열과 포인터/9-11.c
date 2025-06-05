#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b, tmp;
	int *p1, *p2;

	printf("a 값 입력: "); //a,b 값 입력
	scanf("%d", &a);
	printf("b값 입력:");
	scanf("%d", &b);

	p1 = &a;
	p2 = &b;

	tmp = *p1; //a의 값을 tmp에 저장
	*p1 = *p2; //b의 값을 a에 저장
	*p2 = tmp; //tmp의 값을 b에 저장

	printf("바뀐 값 a는 %d, b는 %d \n", a, b);
}