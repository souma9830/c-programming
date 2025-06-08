#include<stdio.h>
int main(){
    int r,c;
    printf("ENter the row and colum ");
    scanf("%d%d",&r,&c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(j==i || i+j==r+1) printf("*");
            else printf(" ");
        }
        printf("\n");
        }
    
    }
