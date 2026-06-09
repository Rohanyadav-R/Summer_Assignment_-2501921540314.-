#include<stdio.h>
void fibonacci(int n){
    int a= 0,b=1;
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        int sum = a+b;
        a = b;
        b = sum;
    }
    return ;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}