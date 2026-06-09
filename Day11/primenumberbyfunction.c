#include<stdio.h>
void prime(int n){
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = 0;
            break;
        }
    }
    if(flag == 0||n<=1) 
    printf("%d is not prime number",n);
    else printf("%d is prime number ",n);
    return ;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
prime(n);
    return 0;
}