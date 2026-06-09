
#include <stdio.h>
int factorial(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    return fact;
}

int main()
{
int n;
printf("Enter the number : ");
scanf("%d",&n);
int fact = factorial(n);
printf("factorial of %d is %d",n ,fact);

    return 0;
}
