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
    // int brr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        printf("%d ",arr[j][i]);
        }
        printf("\n");
    } 
}