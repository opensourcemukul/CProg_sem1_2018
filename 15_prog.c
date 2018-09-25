#include <stdio.h>
int main(int argc, char const *argv[])
{
	char choice = 'Y';
	do
	{
		int a, b;
		printf("Enter 2 numbers.\n");
		scanf("%d %d", &a, &b);
		printf("Sum of %d and %d is %d\n", a, b, (a+b));
		printf("Do you want to add more numbers? (Y/N)\n");
		scanf(" %c", &choice);
	} while (choice == 'Y' || choice == 'y');
	return 0;
}