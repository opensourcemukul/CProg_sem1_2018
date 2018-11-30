#include <stdio.h>
int print_2d(int n_rows, int n_cols, int *a){
/*	printf("%d\n", *(a+0*n_cols));
	printf("%d\n", *(a+0*n_cols+1));
	printf("%d\n", *(a+1*n_cols+0));
	printf("%d\n", *(a+1*n_cols+1));
*/	for (int i = 0; i < n_rows; ++i)
	{
		for (int j = 0; j < n_cols; ++j)
		{
			printf("%d\n", *(a+i*n_cols+j));
		}
	}
}
int read_2d(int n_rows, int n_cols, int *a){
	for (int i = 0; i < n_rows; ++i)
	{
		for (int j = 0; j < n_cols; ++j)
		{
			scanf("%d",((a+i*n_cols+j)));
		}
	}
}
int main(int argc, char const *argv[])
{
	int a[2][2];
	read_2d(2,2,(int *)a);
	print_2d(2,2,(int *)a);
	/*for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			scanf("%d",&a[i][j]);
		}
	}*/
	/*
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%d \t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("%p\n", a);
	printf("%d\n", *((int *)a));
	printf("%d\n", *((int *)a+1));
	printf("%d\n", *((int *)a+2));
	printf("%d\n", *((int *)a+3));
	printf("-----\n");
	// printf("%d\n", *((int *)(a+1)));
	printf("%d\n", *((int *)(a+0)+0));
	printf("%d\n", *((int *)(a+0)+1));
	printf("%d\n", *((int *)(a+1)+0));
	printf("%d\n", *((int *)(a+1)+1));
	printf("--for loop--\n");
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%d\t", *((int *)(a+i)+j));
		}
		printf("\n");
	}
	printf("--transpose--\n");
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%d\t", *((int *)(a+j)+i));
		}
		printf("\n");
	}
	printf("--transpose to b--\n");
	int b[2][2];
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			*((int *)(b+i)+j) = *((int *)(a+j)+i);//printf("%d\t", );
		}
	}
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%d\t", *((int *)(b+i)+j));
		}
		printf("\n");
	}
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%p\t", &a[i][j]);
		}
	}*/
	// printf("%p\n", a+1);
	// printf("%d\n", *(a+1));
	/*for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%d\t", *(a+i*2 + j));
			// printf("%d\t", *((int *)a+i*2 + j));
		}
		printf("\n");
	}*/
	return 0;
}