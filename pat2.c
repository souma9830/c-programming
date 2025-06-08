#include<stdio.h>
int main(){
    int r,c;
    printf("enter the row number and colum number respectivly");
    scanf("%d%d",&r,&c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<i;j++){
            printf("*");
        }
        printf("\n");
    }
}