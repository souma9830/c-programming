#include<stdio.h>
int main(){
    int n;
    printf("Enter the row nmber");
    scanf("%d",&n);
    int nsp=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=nsp;k++){
            printf("");
        }
    }
}