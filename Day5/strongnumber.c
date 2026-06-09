#include<stdio.h>
int main(){
    int n,sum =0,lastdigit;
    printf("Enter the number : ");
    scanf("%d",&n);
    int temp  =n;
    while(n>0){
        int fact = 1;
        lastdigit = n%10;
    for( int i = 1; i<=lastdigit;i++){
        fact = fact*i;
    }
    sum = sum + fact;
    n = n/10;
    }
        if(sum == temp)
            printf("%d is a strong number ",temp);
        
        else
        printf("%d ia not a strong number",temp);
    return 0;
}