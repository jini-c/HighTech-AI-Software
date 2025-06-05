#include <stdio.h>

void main()
{
	char ch; //문자형 변수 선언
	char* p; //문자형 포인터 변수 p와 q 선언
	char* q;

	ch = 'A'; //ch에 문자값 'A'를 대입
	p = &ch; //ch의 주솟값을 p에 대입

	q = p; 

	*q = 'Z'; //q가 가리키는 곳의 실제 값을 변경한다.

	printf("ch가 가지고 있는 값: ch ==> %c \n\n", ch);

}