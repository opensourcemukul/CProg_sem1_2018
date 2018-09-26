#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i = 0;
	label_1: printf("%d\n", i);
	goto label_1;
	return 0;
}