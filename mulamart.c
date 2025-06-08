#include<stdio.h>
#include<limits.h>
int main(){
    int m,n;
    printf("Enter the Row and colum number");
    scanf("%d%D",&m,&n);
    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }
    int p,q;
    printf("Enter the Row and colum number of the 2nd array");
    scanf("%d%d",&p,&q);
    int arr2[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    int res[m][p];
    if(n==q){
        printf("Matrix multiplication possible");
      
        for(int i=0;i<m;i++){
            for(int j=0;j<p;j++){
                int res[i][j];
                for(int k=0;k<n;k++){
                    res[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",arr1[i][j]);
        }
        printf("\n");
    }

}