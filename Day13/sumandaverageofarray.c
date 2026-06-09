#include<stdio.h>
int main(){
    int n,sum = 0,average;
    printf("size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all element of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum = sum+ arr[i];
        average = sum/n;
    
    }
    printf("Sum of the array is %d \n ",sum);
    printf("Average of the array is %d",average);
    return 0;
}