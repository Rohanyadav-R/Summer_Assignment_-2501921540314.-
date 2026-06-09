#include<stdio.h>
int main(){
    int start,end,lastdigit;
    printf("Enter starting number : ");
    scanf("%d",&start);
    printf("Enter the end number : ");
    scanf("%d",&end);
    printf("Armstrong number : ");
    for(int n=start;n<end;n++ ){
        int temp = n;
        int num = n;
        int sum=0;
    while(num>0){
        
        lastdigit = num%10;
        sum += lastdigit*lastdigit*lastdigit;
        num = num/10;
    }
    if(sum == temp)
        printf("%d ",temp);
    }
    return 0;
}