#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	FILE* wfp;
	int i, k;

	wfp = fopen("C:\\temp\\data6.txt", "w"); //���� ���� ����
	for (i = 1; i <= 9;i++)
		fprintf(wfp, " #��%d��# ", i);
	fprintf(wfp, "\n\n");
	for (i = 1; i <= 9;i++)
	{
		for (k = 1;k <= 9;k++)
		{
			fprintf(wfp, "%2d X %2d=%2d", k, i, k * i);
		}
		fprintf(wfp, "\n");
	}

	fclose(wfp);
}