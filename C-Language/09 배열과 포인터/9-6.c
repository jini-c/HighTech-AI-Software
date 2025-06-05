#include <stdio.h>

void main()
{
	char ch;//문자형 변수 선언
	char* p;//포인터 변수 선언*포인터 = 주소

	ch = 'A';//문자 'A'를 ch에 대입
	p = &ch; //ch의 주소를 p에 대입

	printf("ch가 가지고 있는 값: ch ==> %c \n", ch); //ch = A
	printf("ch의 주소(address): &ch ==> %d \n", &ch); //&ch는 주소
	printf("p가 가지고 있는 값: p ==> %d \n", p); //p = &ch이기 때문에 주소값
	printf("p가 가리키는 곳의 실제 값: * p ==> % c \n", *p); //*p = &ch = A
}