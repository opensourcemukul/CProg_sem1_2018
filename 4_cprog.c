#include <stdio.h> //pre-processor directive
int main()
{
	int b = 50;
	{
		int b = 10;
		printf("address of b: %p\n",&b);
	}	
	printf("address of (outer) b: %p\n",&b);
	return 0;
}