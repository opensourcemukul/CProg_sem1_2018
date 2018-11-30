#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int *a;
	int n;
	printf("kitna int chahte ho?\n");
	scanf("%d",&n);
	a = malloc(n*sizeof(int));
	printf("%p\n", a);
	printf("%d\n", *a);
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", (a+i));
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d", *(a+i));
	}
	
	return 0;
}