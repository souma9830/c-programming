#include<stdio.h>
int main(){
    int n;
    printf("Enter the array sizw");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Student who got below 35 their roll number is given below");
    for(int i=0;i<n;i++){
        if(arr[i]<35){
            printf("%d,",i+1);
        }
    }
}