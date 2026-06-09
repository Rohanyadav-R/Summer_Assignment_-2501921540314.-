#include<stdio.h>
int main(){
 int n,m;
 printf("Enter the size of first array : ");
 scanf("%d",&n);
 printf("Enter the size of second array : ");
 scanf("%d",&m);
 int p = m+n;
 printf("The size of merge array : %d\n ",p);
 int arr[n];
 printf("Enter the all the elment of first array : ");
 for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
 }
printf("Enter the all the elment of second array : ");
int brr[m];
 for(int i=0;i<m;i++){
     scanf("%d",&brr[i]);
 }
 int crr[p];
 for(int i=0;i<n;i++){
     crr[i] = arr[i];
 }
 for(int i=0;i<m;i++){
     crr[n+i] = brr[i];
 }
 printf(" Merge array : ");
 for(int i=0;i<p;i++){
     printf("%d ",crr[i]);
 }
    return 0;
}