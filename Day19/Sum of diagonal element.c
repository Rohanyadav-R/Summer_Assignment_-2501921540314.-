
#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter the no of rows/column :");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter the  matrix element :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j= 0;j<n;j++){
        if(i == j){
            sum = sum +arr[i][j];
        }
        }
    }
    printf("Sum of diagonal element is : %d",sum);
    return 0;
        
    }

