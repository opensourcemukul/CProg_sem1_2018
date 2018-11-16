#include <stdio.h>
int print_array(int *a, int size){
	for (int i = 0; i < size; ++i)
	{
		printf("%d\n", a[i]);
	}
}
int shift_array(int *a, int size, int start, int stop){
	for (int k = stop; k > start; k--)
	{
		a[k] = a[k-1];
	}
}
int find_right_position(int *a, int size, int start, int stop, int element){
	for (int i = stop; i >= start; i--)
	{
		if (a[i] < element)
		{
			return i+1;
		}
	}
	return start;
}
int main(int argc, char const *argv[])
{
	int a[5] = {1,2,6,8,5};
	// print the array
	print_array(a, 5);
	for (int j = 0; j < 5; ++j)
	{
		int x = a[j];
		int p = find_right_position(a, 5, 0, j, x);
		// shift to right from 3rd position
		shift_array(a,5,p,j);
		a[p] = x;
	}
	// print the array
	print_array(a, 5);
	return 0;
}