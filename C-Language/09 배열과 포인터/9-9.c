#include <stdio.h>
void main()
{
	char s[8] = "Basic-C";
	char* p;
	int i;

	p = s; //������ ������ �迭 �ּҸ� �����Ѵ�.

	for (i = sizeof(s) - 2;i >= 0; i--) //������ �迭�� ������ �迭�� ������ŭ �ݺ��Ѵ�.
		printf("%c", p[i]); // ������ ������ ����Ű�� ���� ���� �ϳ��� ����Ѵ�.

	printf("\n");
}