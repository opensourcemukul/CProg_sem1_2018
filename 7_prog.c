#include <stdio.h>
int main()
{
	int i;
	int a=5;
	for (i = 1; i <= 10; i=i+1)
	{
		printf("%d x %d = %d\n",a,i,a*i);
	}
	
	return 0;
}