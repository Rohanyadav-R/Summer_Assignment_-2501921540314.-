
#include <stdio.h>

int main()
{
    int n,m;
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
for( int i=0;i<n;i++){
    for( int j=i;j<m;j++){
        int temp  = arr[i][j];
        arr[i][j]= arr[j][i];
        arr[j][i] = temp;
    }
}
printf("The Transpose of matrix is :\n");
for(int i=0;i<n;i++){
    for( int j=0;j<m;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
    return 0;
        
    }
