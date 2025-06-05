#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main()
{
	char* p[3];
	char imsi[100] = { 0 };
	int i, size;

	for (i = 0; i < 3; i++)
	{
		printf("%d 번째 문자열 :", i + 1);
		gets(imsi);

		size = strlen(imsi);
		p[i] = (char*)malloc((sizeof(char) * size) + 1);

		if (p[i] != NULL) // Check if memory allocation was successful
		{
			strcpy_s(p[i], size + 1, imsi); // Use strcpy_s for safer string copy
		}
		else
		{
			printf("메모리 할당 실패\n");
			return; // Exit the program if memory allocation fails
		}
	}

	printf("\n -- 입력과 반대로 출력 (포인터) --\n");
	for (i = 2; i >= 0; i--)
	{
		printf(" %d : %s\n", i + 1, p[i]);
	}

	for (i = 0; i < 3; i++)
		free(p[i]);
}