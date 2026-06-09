#include<stdio.h>
int main(){
    int n,lastdigit,sum = 0;
    printf("Enter the number : ");
    scanf("%d",&n);
    int temp=n;
    while(n>0){
        lastdigit = n%10;
        sum += lastdigit*lastdigit*lastdigit;
        n = n/10;
    }
    if(sum == temp)
        printf("%d is a Armstrong number",temp);
        else printf("%d is not a Armstrong number",temp );
    return 0;
}