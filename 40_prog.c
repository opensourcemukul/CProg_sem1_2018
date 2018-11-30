#include<stdio.h>
 
int get_array(int m, int n, int *a){
    for(int i=0;i<m;++i)
            for(int j=0;j<n;++j)
                scanf("%d",&a[i][j]);
}
int print_array(int m, int n, int *a) 
{ 
    int i, j; 
    for (i = 0; i < m; i++) 
      for (j = 0; j < n; j++) 
        printf("%d ", *((a+i*n) + j)); 
} 
int main()
{
    int a[5][5],b[5][5],c[5][5],m,n,p,q,i,j,k;
    printf("Enter rows and columns of first matrix:");
    scanf("%d%d",&m,&n);
    printf("Enter rows and columns of second matrix:");
    scanf("%d%d",&p,&q);
    
    if(n==p)
    {
        printf("\nEnter first matrix:\n");
        get_array(m,n, (int *)a);
        
        printf("\nEnter second matrix:\n");
        get_array(p,q, (int *)b);
        
        printf("\nThe new matrix is:\n");
        
        for(i=0;i<m;++i)
        {
            for(j=0;j<q;++j)
            {
                c[i][j]=0;
                for(k=0;k<n;++k)
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                        printf("%d ",c[i][j]);
            }
            
            printf("\n");
        }
    }
    else
        printf("\nSorry!!!! Matrix multiplication can't be done");
 
    return 0;
}