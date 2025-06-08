#include<stdio.h> 
int main(){
    int n,m;
    printf("Enter the row and colum number respectivly");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
     int sum=0;
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
     }
     printf("The sum is %d",sum);
     
}