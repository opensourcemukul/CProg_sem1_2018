#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a=1,b=1,c=0,i=0;
	label_1:
	if (i<10)
	{
		a=b;
		b=c;
		c=a+b;
		i=i+1;
	}
	else
	{
		goto label_2;
	}
	printf("%d\n",c );
	goto label_1;
	label_2:
	return 0;
}