#include <stdio.h>
int print_array(int *a, int size){
	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", a[i]);
	}
}
int main(int argc, char const *argv[])
{
	int a[5] = {1,2,3,4,5};
	int b[5] = {6,7,8,9,10};
	print_array(a,5);
	print_array(b,5);
	int c[5];
	for (int i = 0; i < 5; ++i)
	{
		c[i] = a[i] + b[i];
	}
	print_array(c,5);
	return 0;
}