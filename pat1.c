#include<stdio.h>
int main(){
    int r,c;
    printf("Enter the row number and colum number respectively");
    scanf("%d%d",&r,&c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            printf("*");
        }
        printf("\n");
    }
}