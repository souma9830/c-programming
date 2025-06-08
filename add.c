#include<stdio.h>
int main()
{
    int arr1[2][2]={1,2,3,4};
    int arr2[2][2]={1,2,3,4};
    int res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j]=arr1[i][j]+arr2[i][j];
        }
        printf("\n");
    }
    for(int k=0;k<2;k++){
        for(int l=0;l<2;l++){
            printf("%d ",res[k][l]);
        }
        printf("\n");
    }
} 