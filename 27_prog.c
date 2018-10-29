#include <stdio.h>

void swap(int *a, int *b)
{
	printf("%p\n", a);
	printf("%p\n", b);
	printf("%p\n", &a);
	printf("%p\n", &b);
	printf("%d\n", *a);
	printf("%d\n", *b);
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char const *argv[])
{
	int a=3, b=5;
	printf("%d %d\n", a, b);
	printf("%p\n", &a);
	printf("%p\n", &b);
	swap(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}