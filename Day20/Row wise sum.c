
#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter the no of rows :");
    scanf("%d",&n);
    printf("Enter the no of coulumn :");
    scanf("%d",&m);
    int arr[n][m];
    printf("Enter the matrix element :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
for(int i=0;i<n;i++){
    int sum = 0;
    for( int j=0;j<m;j++){
        sum = sum + arr[i][j];
    }
    printf("Sum of row %d is : %d\n",i,sum);
}
    return 0;
        
    }

