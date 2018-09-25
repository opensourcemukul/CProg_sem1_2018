#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	int a = 1;
	int b = 1;
	int c;
	for (i = 1; i <= 10; i=i+1)
	{
		if (i>>2)
		{
			a = b;
			b = c;
			c = a + b;
		}
		else 
		{
			c=1;
		}
		printf("%d, ", c);
	}
	return 0;
}