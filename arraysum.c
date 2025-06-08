#include<Stdio.h>
int main(){
    int n;
    printf("Enter the array sizw");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int j=0;j<n;j++){
        sum=sum+arr[j];
    }
    printf("The sum of the elemnt present in the array is %d",sum);
    
}