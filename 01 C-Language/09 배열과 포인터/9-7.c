#include <stdio.h>

void main()
{
	char ch; //������ ���� ����
	char* p; //������ ������ ���� p�� q ����
	char* q;

	ch = 'A'; //ch�� ���ڰ� 'A'�� ����
	p = &ch; //ch�� �ּڰ��� p�� ����

	q = p; 

	*q = 'Z'; //q�� ����Ű�� ���� ���� ���� �����Ѵ�.

	printf("ch�� ������ �ִ� ��: ch ==> %c \n\n", ch);

}