#include<stdio.h>
#include<limits.h>
int main(){
    int m,n;
    printf("Enter the Row and colum number");
    scanf("%d%D",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    int max=INT_MIN;
    int idx;
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        if(sum>max){
            max=sum;
            idx=i;
        }
    }
    printf("The heighst sum of %d is %d",idx+1,max);
}