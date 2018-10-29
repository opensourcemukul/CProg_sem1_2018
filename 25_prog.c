#include <stdio.h>
int sum(int a, int b)
{
	int c=a+b;
	return c;
}
int main(int argc, char const *argv[])
{
	int p = sum(1,2);
	printf("%d\n", p);
	return 0;
}