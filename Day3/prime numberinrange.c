
#include <stdio.h>

int main()
{
    int start,end;
    printf("Enter the starting number : ");
    scanf("%d",&start);
    printf("Enter the end number : ");
    scanf("%d",&end);
    printf("The prime number is from %d to %d\n",start,end);
    for( int n= start;n<end;n++){
        if(n<2)
        continue;
        int flag =1;
        for(int i =2; i<n/2;i++){
            if(n%i==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            printf("%d ",n);
        }
    }

    return 0;
}