
#include <stdio.h>

int main()
{
int n,lastdigit,count=0;
printf("Enter the number :");
scanf("%d",&n);
int temp=n;
while(n>0){
    n=n/10;
    count++;
}
printf("The number of digit in %d is %d",temp,count);
    return 0;
}
