#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[2];
	a[0] = 1;
	a[1] = 2;
	printf("%p\n", a);
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	return 0;
}