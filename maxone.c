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
    int max=0;
    int idx;
    for(int i=0;i<m;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                cnt++;
            }
            if(cnt>max){
                max=cnt;
                idx=i;
            }
        }
    }
    printf("The maximum number of 1 presnt in the row %d and the number of 1 is %d",idx+1,max);
}