#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a = 5;
	float b = 10;
	float c;
	c=a+b;
	printf("%f\n", *&c );
	printf("%d\n", *&c );
	printf("%d\n", c);
	c = a-b;
	printf("%p\n", &c );
	printf("%d\n", c);
	c = a/b;
	printf("%d\n", c);
	c = a*b;
	printf("%d\n", c);
	return 0;
	/*int a = 5;
	float b = 10;
	int c = a+b;
	printf("%d\n", c);
	c = a-b;
	printf("%d\n", c);
	c = a/b;
	printf("%d\n", c);
	c = a*b;
	printf("%d\n", c);
	return 0;*/
}