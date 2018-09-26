#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i = 0;
	label_1: 
		if (i<10)
		{
			printf("%d\n", i);
			i=i+1;
		}
		else
		{
			goto label_2;
		}
	goto label_1;
	label_2: printf("ending...\n");
	return 0;
}