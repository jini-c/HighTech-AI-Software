
// ��.�ҹ��� ��ȯ 

#include<stdio.h> 



int main() {

	// ���� ���� 

	char str[100];

	int i;

	int diff;



	// ���� �Է� 

	printf("���ڿ��� �Է�(100�� �̳�) : ");

	gets(str);



	// ��.�ҹ��� ��ȯ �� ��� 

	diff = 'a' - 'A';



	for (i = 0; i < 100; i++) {

		if (str[i] >= 'A' && str[i] <= 'Z')

			str[i] = str[i] + diff;

		else if (str[i] >= 'a' && str[i] <= 'z')

			str[i] = str[i] - diff;

		else

			str[i] = str[i];

	}



	printf("��ȯ�� ��� ==> %s ", str);



	return 0;

}