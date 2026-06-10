#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the sorted array : ");
    for(int i= 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int mid;
     int idx = -1;
    int x;
    printf("Enter the targeted element : ");
    scanf("%d",&x);
    int low = 0;
    int high = n-1;
    while(low<=high){
     mid = (low+high)/2;
        if(arr[mid] == x) {
         idx = mid;
        break;
        }
        else if(arr[mid]>x) {
        high = mid-1;
        }
        else {
        low = mid+1;
    }
    }
    if(idx != -1){
        printf("Element found at index : %d ",idx);
    }
    else printf("Element is not found ");
    return 0;
}