#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i;
	int a = 1;
	int b = 1;
	int c;
	label1: c=a+b;
		if (i>2)
		{
			a = b;
			b = c;
			goto label1;
		}
		else 
		{
			goto label2;
		}
		label2: c=1;
		printf("%d, ", c);
	return 0;
}