#include <stdio.h>
int main(int argc, char const *argv[])
{
	float height[5];
	for (int i = 0; i < 5; ++i)
	{
		printf("Enter the value of height[%d]\n", i);
		scanf(" %f", &height[i]);
	}
	for (int i = 0; i < 5; ++i)
	{
		printf("\nheight[%d] = %f\n", i, height[i]);
	}
	return 0;
}