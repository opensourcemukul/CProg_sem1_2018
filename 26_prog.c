#include <stdio.h>
void even_or_odd(int a)
{
	if (a%2 == 0)
	{
		printf("Even\n");
	}
	else {
		printf("Odd\n");
	}
}
int prime_or_not(int a) // returns 0 for prime, 1 for non-prime and -1 for neither prime nor composite
{
	int flag = 0;
	if (a<=1)
	{
		return -1;
	}
	if (a==2)
	{
		return flag;
	}
	else{
		for (int i = 2; i < a/2; ++i)
		{
			if (a%i == 0)
			{
				flag = 1;
				break;
			}
		}
	}
	return flag;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char const *argv[])
{
	int prime_flag = prime_or_not(-345);
	if (prime_flag == 1)
	{
		printf("Not prime\n");
	}
	else if (prime_flag == 0)
	{
		printf("Prime\n");
	}
	else
	{
		printf("Kuch bhi nahi\n");
	}
	
	int a=3, b=5;
	printf("%d %d\n", a, b);
	swap(a,b);
	printf("%d %d\n", a, b);

	return 0;
}