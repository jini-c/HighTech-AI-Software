#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main()
{
	char ss[100]; //�Է¹��� ���� �迭�� �����Ѵ�.
	int count, i;
	char *p; //������ �����͸� �����Ѵ�

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", ss); //���ڿ��� �Է¹޴´�.

	count = strlen(ss); //�Է��� ���ڿ��� �����̴�.

	p = ss; //�迭 ss�� �ּҸ� ������ ���� p�� �����Ѵ�.

	printf("������ �Ųٷ� ��� ==>");
	for (i = 0; i < count; i++)
	{
		printf("%c", *(p + count - (i + 1))); //������ p�� �ִ� ���� ���� ���ڿ��� �� �ں��� ���
	}
	printf("\n");
}