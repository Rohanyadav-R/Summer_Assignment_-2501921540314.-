
#include <stdio.h>
int main()
{
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  int flag = 1;
  if(n<=1){
      flag=0;
  }
  for(int i=2;i<n/2;i++){
    if(n%i==0){
        flag =0;
        break;
    }  
  }
  if (flag ==1|| n==2)
  printf("%d is a prime number",n);
  else 
  printf("%d is a not a prime number",n);

    return 0;
}