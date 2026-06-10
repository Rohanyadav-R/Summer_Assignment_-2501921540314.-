

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
int brr[n][m];
printf("Enter the second matrix element :\n");
for( int i=0;i<n;i++){
    for( int j=0;j<m;j++){
        scanf("%d",&brr[i][j]);
        
    }
}
int crr[n][m] ;
printf("The resultant matrix is :\n");
for(int i=0;i<n;i++){
    for( int j=0;j<m;j++){
        crr[i][j] = arr[i][j] - brr[i][j];
        printf("%d ",crr[i][j]);
    }
    printf("\n");
}
    return 0;
        
    }
