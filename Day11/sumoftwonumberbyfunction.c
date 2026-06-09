#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
printf("Enter a : ");
scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);
    int add = sum(a,b);
    printf("sum of %d and %d is %d",a,b,add);
    return 0;
}