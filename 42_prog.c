#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a[5];
	for (int i = 0; i < 5; ++i)
	{
		scanf("%d",&a[i]);
	}
	/*for (int i = 0; i < 5; ++i)
	{
		printf("%d\t",a[i]);
	}*/
	printf("\n");
	/*printf("%p\n", a);
	printf("%d\n", *a);
	printf("%p\n", a+1);
	printf("%d\n", *(a+1))*/;
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\t",*(a+i));
	}
	return 0;
}