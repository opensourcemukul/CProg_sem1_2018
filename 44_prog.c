#include <stdio.h>
int main(int argc, char const *argv[])
{
	int p = 10;
	int *p1 = &p;
	printf("%d\n", &p);
	printf("%d\n", *&p);
	printf("%d\n", *&p1);
	printf("%d\n", &(*p));
	printf("%d\n", &*p1);
	return 0;
}