
#include <stdio.h>
int Armstrong(int n){
    int lastdigit,sum = 0;
    while(n>0){
    lastdigit = n%10;
    sum =  sum + lastdigit*lastdigit*lastdigit;
    n= n/10;
    }
    

    return sum ;
}

int main()
{
int n;
printf("Enter the number : ");
scanf("%d",&n);
int temp =n;
int sum = Armstrong(n);
if(temp==sum){
    printf("%d is a Armstrong number ",temp);
}
else printf("%d is not a Armstrong number ",temp);
    return 0;
}
