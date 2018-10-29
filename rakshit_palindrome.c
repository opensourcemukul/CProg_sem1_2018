
/*Check the number if it is a palindrome eg 313*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int n,originalInteger,reversedinteger=0,remainder;
	printf("Enter an Interger\n");
	scanf("%d",&n);
	originalInteger=n;
	while(n !=0)						//this loop makes the input number reversed
	{
		remainder=n%10;
		reversedinteger=reversedinteger*10+remainder;
		n=n/10;
	}
	if (originalInteger==reversedinteger)			//check for palindrome
	{
		printf("%d is palindrome\n",originalInteger );
	}
	else
	{
		printf("%d is not a palindrome\n",originalInteger );
	}
	return 0;
}