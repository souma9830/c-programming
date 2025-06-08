#include<stdio.h>
int main(){
     int r;

     printf("enter the row and colum number");
     scanf("%d",&r);
     for(int i=1;i<=r;i++){
        for(int j=1;j<=r;j++){
            int mid=(r/2)+1;
            if(i==mid || j==mid){
                printf("*");
            }
            else printf(" ");
        }
        printf("\n");
     }
    

}