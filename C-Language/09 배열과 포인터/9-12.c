#include <stdio.h>

void main()
{
	int s[10] = { 1, 0, 5, 3, 2, 4, 9, 6, 7, 8 };
	int i, k, tmp;

	int* p;

	p = s;

	printf("������ �迭 s ==>"); //for�� ����ؼ� s �迭�� ����Ѵ�.
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");

	for(i=0; i < 9; i++) //9ȸ �ݺ�. 
	{
		for (k = i + 1; k < 10; k++) // ���� for������ 
		{
			if (*(p + i) > *(p + k)) //p+i�� p+k ���� ��
			{
				tmp = *(p + i);
				*(p + i) = *(p + k);
				*(p + k) = tmp;
			}
		}
	}
	printf("���� �� �迭 s ==>");
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
		printf("\n");
}