#include <stdio.h>

void main()
{
	int s[10] = { 1, 0, 5, 3, 2, 4, 9, 6, 7, 8 };
	int i, k, tmp;

	int* p;

	p = s;

	printf("정렬전 배열 s ==>"); //for문 사용해서 s 배열을 출력한다.
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");

	for(i=0; i < 9; i++) //9회 반복. 
	{
		for (k = i + 1; k < 10; k++) // 내부 for문으로 
		{
			if (*(p + i) > *(p + k)) //p+i와 p+k 값을 비교
			{
				tmp = *(p + i);
				*(p + i) = *(p + k);
				*(p + k) = tmp;
			}
		}
	}
	printf("정렬 후 배열 s ==>");
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
		printf("\n");
}