#include<stdio.h>
int main(){
    int n;
    printf("Enter the array sizw");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int brr[n];
   for(int i=0;i<n;i++){
    brr[i]=arr[n-i];
    printf("%d",brr[i]);
   }
}