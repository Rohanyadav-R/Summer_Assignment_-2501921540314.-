#include<stdio.h>
int main(){
    int n;
    printf("size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all element of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
     for(int j=i+1;j<n; j++){
        if(arr[i] == arr[j]) {
     int temp = arr[n-1];
     arr[n-1] = arr[j];
     arr[j] = temp;
       n--;
       j--;
        }
     }
    }
    printf("Array after removing duplicate : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}