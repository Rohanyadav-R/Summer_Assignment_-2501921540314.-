#include<stdio.h>
int main(){
    int n;
    printf("size of array : ");
    scanf("%d",&n);
    int x;
    printf("Enter the x  :");
    scanf("%d",&x);
    int arr[n];
    printf("Enter all element of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe index and pair is : ");
    for(int i=0;i<n;i++){
     for(int j=i+1;j<n; j++){
        if(arr[i]+arr[j] == x) {
        printf("(%d,%d) and (%d,%d)\n",i,j,arr[i],arr[j]);
        }
     }
    }
    return 0;
}