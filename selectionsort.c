#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the array sizw");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   for(int i=0;i<n-1;i++){
    int min=INT_MAX;
    int mindex=-1;
    for(int j=i;j<=n-1;j++){
        if(min>arr[j]){
            min=arr[j];
            mindex=j;
        }
    }
    int temp;
    temp=arr[mindex];
    arr[mindex]=arr[i];
    arr[i]=temp;
   }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}