#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i, j, k;
	for (i = 0; i < 5; i=i+1)
	{
		for (j = 0; j < 5; j=j+1)
		{
			A:
			for (k = 0; k < 5; k=k+1)
			{
				printf("%d, %d, %d\n", i, j, k);
			}
		}
	}
	goto A;
	return 0;
}