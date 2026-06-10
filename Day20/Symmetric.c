
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no of rows/coulmn :");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the  matrix element :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
int brr[n][n];
for( int i=0;i<n;i++){
    for( int j=0;j<n;j++){
        brr[i][j] = arr[j][i];
    }
}
int symmetric = 0;
for(int i=0;i<n;i++){
    for( int j=0;j<n;j++){
     if(brr[i][j] != arr[i][j])
     symmetric = 1;
    }
}
if(symmetric == 1) printf("Matrix is non-symmetric");
else printf("Matrix is symmetric");
    return 0;
        
    }