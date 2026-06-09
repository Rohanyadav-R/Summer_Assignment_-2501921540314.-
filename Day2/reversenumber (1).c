
#include <stdio.h>

int main()
{
    int n,lastdigit,reverse=0;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n>0){
        lastdigit =n%10;
        reverse = reverse*10+lastdigit;
        n=n/10;
        
    }
    printf("The reverse number = %d",reverse);
    
    

    return 0;
}
