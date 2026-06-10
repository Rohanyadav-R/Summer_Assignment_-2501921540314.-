
#include <stdio.h>

int main()
{
    int n,m,sum =0;
    printf("Enter the no of rows :");
    scanf("%d",&n);
    printf("Enter the no of coulumn :");
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter the first matrix element :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf(" Transpose of the matrix is :\n");
for( int i =0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("%d ",arr[j][i]);
    }
    printf("\n");
}
    return 0;
        
    }
