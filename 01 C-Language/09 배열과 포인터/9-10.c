#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char ss[100]; //입력받을 문자 배열을 선언한다.
	int count, i;
	char *p; //문자형 포인터를 선언한다

	printf("문자열을 입력하세요 : ");
	scanf("%s", ss); //문자열을 입력받는다.

	count = strlen(ss); //입력한 문자열의 개수이다.

	p = ss; //배열 ss의 주소를 포인터 변수 p에 대입한다.

	printf("내용을 거꾸로 출력 ==>");
	for (i = 0; i < count; i++)
	{
		printf("%c", *(p + count - (i + 1))); //포인터 p에 있는 실제 값을 문자열의 맨 뒤부터 출력
	}
	printf("\n");
}