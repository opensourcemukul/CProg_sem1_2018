#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i=0;
	do
	{
		printf("%d\n", i);
		i=i-1;
	} while (i>0);
	printf("%d\n", i);
	return 0;
}