#include<stdio.h>
int sumofdigit(int n){
    if(n == 0) return 0;
    
    return (n%10) + sumofdigit(n/10);

}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Sum of digit of %d = %d",n,sumofdigit(n));
    return 0;
}