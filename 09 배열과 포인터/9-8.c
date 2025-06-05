#include <stdio.h>
void main()
{
	char s[8] = "Basic-C";
	char *p;//문자형 포인터 변수를 선언
	
	p = s; //p에 배열 s 주소를 대입한다.

	printf("&s[3] ==> %s\n", &s[3]); //문자열과 포인터의 주솟값을 %s로 출력한다
	printf("p+3 ==> %s\n\n", p+3);

	printf("s[3] ==> %c\n", s[3]); //문자와 포인터의 실제 값을 %c로 출력한다
	printf("*(p+3) ==> %c\n", *(p+3));
}