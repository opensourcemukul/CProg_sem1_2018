#include <stdio.h>
int get_array(int m, int n, int *a){
    
    /*for(int i=0;i<m;++i)
        for(int j=0;j<n;++j)
            scanf("%d",&a[i][j]);*/
}
int main(int argc, char const *argv[])
{
	int a[2][2];
	int *b = (int *)a;
	// get_array(2,2,(int *)a);
	for(int i=0;i<2;++i)
        for(int j=0;j<2;++j)
            scanf("%d",&a[i][j]);
    for(int i=0;i<2;++i)
        for(int j=0;j<2;++j)
            scanf("%d",&b[i][j]);
    for(int i=0;i<2;++i){
        for(int j=0;j<2;++j){
            printf("%d\t",a[i][j]);
        }
    	printf("\n");
    }
	return 0;
}