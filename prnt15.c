#include<stdio.h>
int main(){
    int r,c;
    printf("ENter the row and colum ");
    scanf("%d%d",&r,&c);
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if(j==i) printf("*");
            else printf(" ");
        } for(int k=r;k>=1;k--){
            if(k==i){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
    }
}