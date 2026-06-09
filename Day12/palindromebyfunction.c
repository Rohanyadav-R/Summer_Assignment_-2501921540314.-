
#include <stdio.h>
int palindrome(int n){
    int lastdigit,reverse = 0;
    while(n>0){
    lastdigit = n%10;
    reverse = reverse*10 + lastdigit;
    n= n/10;
    }
    

    return reverse ;
}

int main()
{
int n;
printf("Enter the number : ");
scanf("%d",&n);
int temp =n;
int reverse = palindrome(n);
if(temp==reverse){
    printf("%d is a palindrome",temp);
}
else printf("%d is a not palindrome",temp);
    return 0;
}
