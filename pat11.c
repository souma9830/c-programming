#include<stdio.h>
int main(){
    int n;
    printf("enter the row number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        if(i%2!=0){
            for(int j=1;j<=i;j++){
                printf("%d",j);
            }
            printf("\n");
    }
      else{
            char k=64;
            for(int j=1;j<=i;j++){
                k=64+j;
                printf("%c",k);
            }
            printf("\n");
        }
    }
}