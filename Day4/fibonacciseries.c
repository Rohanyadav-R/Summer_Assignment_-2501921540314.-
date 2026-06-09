#include<stdio.h>
int main(){
    int a=0,b=1,n,sum;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("The fibonacci series is :\n");
    for(int i= 0;i<n;i++){
        printf("%d ",a);
        sum = a+b;
        a= b;
        b=sum;
    }
    return 0;
}