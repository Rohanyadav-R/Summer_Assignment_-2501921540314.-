#include<stdio.h>
int main(){
    int a=0,b=1,n,sum;
    printf("Enter n: ");
    scanf("%d",&n);
    if(n==0)
        printf("fibonacci number = 0");
        else if(n==1)
        printf(" fibonacci number = 1");
        else
    for(int i= 2;i<n;i++){
        sum = a+b;
        a= b;
        b=sum;
    }
 printf(" fibonacci number = %d ",b);
    return 0;
}