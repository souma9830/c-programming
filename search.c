#include<stdio.h>
int main(){
    int n;
    printf("Enter the array sizw");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    printf("enter the number");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            printf("The number is present in the array and its index is %d",i);
        }
    }
}