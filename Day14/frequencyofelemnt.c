#include<stdio.h>
int main(){
    int n;
    printf("size of array : ");
    scanf("%d",&n);
    int x;
    printf("Enter search element : ");
    scanf("%d",&x);
    int arr[n];
    printf("Enter all element of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            count++;
        }
    }
    printf("%d is appear in this array is %d times",x,count);
    return 0;
}