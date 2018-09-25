#include <stdio.h>
What are data types?
Which are the primitive data types in C?
What are the sizes of different primitive data types in C?
int main(int argc, char const *argv[])
{
	int a = 5;
	int b = 10;
	int c = a+b;
	printf("%d\n", c);
	c = a-b;
	printf("%d\n", c);
	float d;
	printf("size of float: %d\n", sizeof(float));
	d = (float)a/b;
	printf("%f\n", d);
	c = a*b;
	printf("%d\n", c);
	return 0;
}