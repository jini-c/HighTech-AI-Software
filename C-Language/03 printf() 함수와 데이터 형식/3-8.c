#include <stdio.h>

void main()
{
	int a, b;
	float c, d;

	a = 100;
	b = a;

	c = 111.1f;
	d = c;

	printf("a ,b�� �� ==> %d, %d \n", a, b);
	printf("c ,d�� �� ==> %f, %f \n", c, d);
}