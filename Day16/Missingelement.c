#include<stdio.h>
int main(){
    int n;
    printf("size of array : ");
    scanf("%d",&n);
    int arr[n-1];
    printf("Enter all element of the array : ");
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    int sum1=0;
    for(int i=0;i<n-1;i++){
       sum1 = sum1 + arr[i];
        
    }
    int sum2 = n*(n+1)/2;
    int x;//missing element
    x = sum2-sum1;
    printf("Mising element = %d",x);
    return 0;
}