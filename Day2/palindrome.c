#include <stdio.h>

int main()
{
    int n,lastdigit,reverse=0;
    printf("Enter the number :");
    scanf("%d",&n);
    int temp =n;
    while(n>0){
        lastdigit =n%10;
        reverse = reverse*10+lastdigit;
        n=n/10;
        
    }
    if(reverse==temp){
    printf("%d is palindrome",temp);
    }
    else {
    printf("%d is not palindrome",temp);
    
    }

    return 0;
}
