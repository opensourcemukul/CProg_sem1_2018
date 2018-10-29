#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i, j;
	for (i = 0; i < 5; i=i+1)
	{
		for (j = 0; j < 5; j=j+1)
		{
			printf("%d, %d\n", i, j);
		}
		printf("%d\n",i);
	}
	return 0;
}