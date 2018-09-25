#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	int a = 1;
	int b = 1;
	printf("%d, ", a);
	printf("%d, ", b);
	int c =  a + b;
	printf("%d, ", c);
	for (i = 0; i < 10; i=i+1)
	{
		a = b;
		b = c;
		c = a + b;
		printf("%d, ", c);
	}
	/*i = 0;
	while(i<10)
	{
		a = b;
		b = c;
		c = a + b;
		printf("%d, ", c);
		i=i+1;
	}*/
	
	return 0;
}