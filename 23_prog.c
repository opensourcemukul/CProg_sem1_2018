#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a, b, temp;
	printf("Enter 2 numbers\n");
	scanf(" %d %d", &a,&b);
	printf("a=%d b=%d\n", a,b );
	temp = a;
	a = b;
	b = temp;
	printf("a=%d b=%d\n", a,b );
	return 0;
}