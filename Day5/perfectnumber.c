#include<stdio.h>
int main(){
    int n,sum=0,lastdigit;
    printf("Enter the number : ");
    scanf("%d",&n);
    int temp  =n;
    for(int i = 1;i<n;i++ ){
        if(n%i==0){
            sum = sum+i;
        }
    }
        if(sum == temp)
            printf("%d is a perfect number ",temp);
        
        else
        printf("%d ia not a perfect number",temp);
    return 0;
}