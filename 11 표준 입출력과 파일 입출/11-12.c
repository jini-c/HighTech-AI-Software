#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	FILE* wfp;
	int hap = 0;
	int in, i;

	wfp = fopen("c:\\temp\\data7.txt", "w"); //파일을 쓰기 모드로 연다.

	for (i = 0; i < 5; i++)
	{
		printf(" 숫자 %d : ", i + 1);
		scanf("%d", &in);
		hap = hap + in;
	}

	fprintf(wfp, "합계 ==> %d\n", hap); //합계를 파일에 출력

	fclose(wfp);
}