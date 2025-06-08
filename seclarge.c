#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the array sizw");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int max= INT_MIN;
   int smax= INT_MIN;
   for(int i=0;i<n;i++){
    if(max<arr[i]){
        max=arr[i];
    }
   }
   for(int j=0;j<n;j++){
    if(smax<arr[j] && arr[j]!=max){
        smax=arr[j];
    }
   }
   printf("The second largest number is %d",smax);
}