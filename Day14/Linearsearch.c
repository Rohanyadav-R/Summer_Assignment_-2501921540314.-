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
    int found = 0;
    for(int i=0;i<n;i++){
        if(x==arr[i]){
            found = 1;
            break;
        }
    }
        if(found == 1)
    printf("%d is found in this array",x);
    else printf("%d is not found in this array ",x);
    return 0;
}