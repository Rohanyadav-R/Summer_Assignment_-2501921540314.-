#include<stdio.h>
int main(){
    int n,evencount = 0,oddcount = 0;
    printf("size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all element of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
    evencount++;
        }
        else oddcount++;
    }
    printf("Even no of element in the array is : %d\n",evencount);
    
     printf("odd no of element in the array is : %d",oddcount);
     return 0;
}