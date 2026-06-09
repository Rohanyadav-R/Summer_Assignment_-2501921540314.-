
#include <stdio.h>
int min ( int a,int b){
    if(a<b)
    return a;
    else return b;
}

int main()
{
int a,b,hcf;
printf("Enater a :");
scanf("%d",&a);
printf("Enter b : ");
scanf("%d",&b);
for(int i=1;i<min(a,b);i++){
    if(a%i==0&&b%i==0){
        hcf =i;
    }
}

printf("The GCD of %d and %d is : %d",a,b,hcf);

    return 0;
}