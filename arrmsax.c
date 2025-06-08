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
    printf("The value %d",max);
    for(int j=0;j<n;j++){
        if(max<arr[j]){
            max=arr[j];
        }
    }
    printf("The maximum number present in the arra is %d",max);

}