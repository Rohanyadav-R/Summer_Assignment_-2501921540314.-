#include<stdio.h>
int main(){
 int n,m,p;
 printf("Enter the no of rows of first matrix :");
 scanf("%d",&m);
 printf("Enter thr no of column of first matrix :");
 scanf("%d",&n);
 printf("Enter the no of column of second matrix :");
 scanf("%d",&p);
 int arr[m][n];
 printf("Enter the all element of first matrix :\n");
 for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
         
 scanf("%d",&arr[i][j]);
     }
 }
 int brr[n][p];
 printf("Enter the all element of second matrix :\n");
 for(int i=0;i<n;i++){
     for(int j=0;j<p;j++){
         scanf("%d",&brr[i][j]);
     }
 }
 int crr[m][p];
 for(int i=0;i<m;i++){
     for(int j=0;j<p;j++){
          crr[i][j]=0;
    for(int k=0;k<n;k++){
        crr[i][j] +=arr[i][k]*brr[k][j];
    }
     }
 }
 printf("Resultant matrix :\n");
 for(int i=0;i<m;i++){
     for(int j=0;j<p;j++){
         printf("%d ",crr[i][j]);
     }
     printf("\n");
 }
 
    return 0;
}