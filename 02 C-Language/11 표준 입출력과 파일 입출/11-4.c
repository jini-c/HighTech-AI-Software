#include <stdio.h>
#include <string.h>

void main()
{
	char password[5] = "5678";
	char input[5];
	int i;

	printf("비밀번호 4글자를 입력하세요 : ");
	for (i = 0; i < 4; i++)
		input[i] = getch();

	if(strncmp(password, input, 4) == 0)
	{
		printf("\n 비밀번호가 일치합니다.\n");
	}
	else
	{
		printf("\n 입력한 비밀번호 ");

		for (i = 0; i < 4; i++)
			putch(input[i]);

		printf("가 틀렸음\n");
		}
}