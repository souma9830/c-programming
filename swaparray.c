#include<stdio.h>
int main(){
    int n;
    printf("Enter the array sizw");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]=arr[i]*2;
        }
        else{
            arr[i]*=10;
        }
    }
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
}