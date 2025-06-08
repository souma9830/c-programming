#include<stdio.h>
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
        if(j%2!=0){
            sum+=arr[j];
        }
    }printf("The sum of the odd index is %d \n",sum);
    int sumeven=0;
    printf("\nthe sum of the even index %d ",sumeven);
    for(int k=0;k<n;k++){
        if(k%2==0){
            sumeven+=arr[k];
        }
    }
    int diff=sumeven-sum;
    printf("\nThe differnce is %d",diff);
}