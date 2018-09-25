#include <stdio.h>
int main()
{
	int a = 1;
	int b = 1;
	int i;
	int c = a-b;
	for (i = 0; i < 30; i = i + 1)
	{
		a = b;
		b = c;
		c = a+b;
		printf("%d\n", c);
	}
 
	return 0;
}