#include<stdio.h>
int main(){
    int n,hcfprime;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i =1;i<=n/2;i++){
        if(n%i==0&&i%2!=0){
            hcfprime=i;
        }
    }
    printf("Largest prome factor of %d is %d",n,hcfprime);
    return 0;
}