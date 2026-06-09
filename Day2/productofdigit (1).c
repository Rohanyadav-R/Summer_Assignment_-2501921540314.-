
#include <stdio.h>

int main()
{
    int n,lastdigit,product=1;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n>0){
        lastdigit =n%10;
        product =product*lastdigit;
        n=n/10;
    }
    printf("The product of digit is %d",product);
    
    

    return 0;
}
