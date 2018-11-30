#include <stdio.h>
#include <stdlib.h>
int print_2d(int n_rows, int n_cols, int *a){
	for (int i = 0; i < n_rows; ++i)
	{
		for (int j = 0; j < n_cols; ++j)
		{
			printf("%d\t", *(a+i*n_cols+j));
		}
		printf("\n");
	}
}
int read_2d(int n_rows, int n_cols, int *a){
	for (int i = 0; i < n_rows; ++i)
	{
		printf("row %d\n", i+1);
		for (int j = 0; j < n_cols; ++j)
		{
			scanf("%d",((a+i*n_cols+j)));
		}
		printf("-----\n");
	}
}
int main(int argc, char const *argv[])
{
	int **a;
	int num_rows, num_cols;
	printf("Enter the number of rows\n");
	scanf("%d",&num_rows);
	printf("Enter the number of columns\n");
	scanf("%d",&num_cols);
	a = (int **)malloc(num_rows*sizeof(int *));
	for (int i = 0; i < num_rows; ++i)
	{
		*(a+i) = (int *)malloc(num_cols*sizeof(int));
	}
	read_2d(num_rows,num_cols,(int *)a);
	print_2d(num_rows,num_cols,(int *)a);
	return 0;
}