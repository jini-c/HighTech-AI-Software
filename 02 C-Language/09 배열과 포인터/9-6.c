#include <stdio.h>

void main()
{
	char ch;//������ ���� ����
	char* p;//������ ���� ����*������ = �ּ�

	ch = 'A';//���� 'A'�� ch�� ����
	p = &ch; //ch�� �ּҸ� p�� ����

	printf("ch�� ������ �ִ� ��: ch ==> %c \n", ch); //ch = A
	printf("ch�� �ּ�(address): &ch ==> %d \n", &ch); //&ch�� �ּ�
	printf("p�� ������ �ִ� ��: p ==> %d \n", p); //p = &ch�̱� ������ �ּҰ�
	printf("p�� ����Ű�� ���� ���� ��: * p ==> % c \n", *p); //*p = &ch = A
}