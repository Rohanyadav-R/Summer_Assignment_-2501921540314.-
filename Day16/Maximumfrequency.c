#include<stdio.h>
int main(){
    int n;
    printf("size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter all element of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxfreq =0;
    int maxelement;
    for(int i=0;i<n;i++){
        int freq = 1;
      for(int j=i+1;j<n;j++){
          if(arr[i] == arr[j]){
              freq++;
          }
      }
      if(freq>maxfreq){
          maxfreq = freq;
          maxelement = arr[i];
      }
    }
    printf("Maximum element = %d\n",maxelement);
    printf("Maximum frequency = %d\n",maxfreq);
    
    return 0;
}