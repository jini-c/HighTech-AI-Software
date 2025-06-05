
// 대.소문자 변환 

#include<stdio.h> 



int main() {

	// 변수 선언 

	char str[100];

	int i;

	int diff;



	// 문장 입력 

	printf("문자열을 입력(100자 이내) : ");

	gets(str);



	// 대.소문자 변환 후 출력 

	diff = 'a' - 'A';



	for (i = 0; i < 100; i++) {

		if (str[i] >= 'A' && str[i] <= 'Z')

			str[i] = str[i] + diff;

		else if (str[i] >= 'a' && str[i] <= 'z')

			str[i] = str[i] - diff;

		else

			str[i] = str[i];

	}



	printf("변환된 결과 ==> %s ", str);



	return 0;

}