#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	char s[20];
	FILE* rfp;

	rfp = fopen("c:\\temp\\data1.txt", "r");

	fgets(s, 20, rfp);

	printf("���Ͽ��� ���� ���ڿ� : ");
	puts(s);

	fclose(rfp);
}