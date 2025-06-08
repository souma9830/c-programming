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
    printf("Enter the Number which you eant to find in the arrray ");
    scanf("%d",&x);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            count++;
        }
    }
    printf("Here in the array the number present ehich is greater than which you give the number is %d",count);
}