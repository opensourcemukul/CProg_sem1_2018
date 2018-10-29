#include <stdio.h>
int main()
{
	int i, j, k;
	// continue; // just for explaining
	for (i = 0; i < 5; i=i+1)
	{
		if (i == 2)
		{
			continue;
		}
		for (j = 0; j < 5; j=j+1)
		{
			if (j == 2)
			{
				continue;
			}
			for (k = 0; k < 5; k=k+1)
			{
				if (k == 2)
				{
					continue;
				}
				printf("%d, %d, %d\n", i, j, k);
			}
		}
	}
	return 0;
}