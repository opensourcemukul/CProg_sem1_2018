#include <stdio.h>

int main(int argc, char const *argv[])
{
	int *p; // p is an integer pointer
	// it has address of an integer variable
	int a = 10;
	p = &a; // assign p the address of a
	printf("%p\n", p);
	printf("%p\n", &a);
	int **q;
	q=&p;
	printf("%p\n", q);
	printf("%p\n", &p);
	return 0;
}
// Test: Explain this program 
//	in your own words