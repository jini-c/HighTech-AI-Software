#include<stdio.h> 

static void str_convert(char* pt)
{
	int i;
	int diff = 'a' - 'A';

	for (i = 0; i < 100; i++) {

		if (pt[i] >= 'A' && pt[i] <= 'Z')
			pt[i] = pt[i] + diff;
		else if (pt[i] >= 'a' && pt[i] <= 'z')
			pt[i] = pt[i] - diff;
		else
			pt[i] = pt[i];
	}

	printf("변환된 결과 ==> %s ", pt);
}