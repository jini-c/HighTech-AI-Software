#include<stdio.h>

void main()
{
	int a = 100;
	int b = 200;

	printf(" 변수 a의 주소는 %d 입니다. \n", &a); //& 주소 지정 연산자
	printf(" 변수 b의 주소는 %d 입니다. \n", &b);
}