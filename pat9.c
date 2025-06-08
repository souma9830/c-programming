#include<stdio.h>
int main(){
    int n;
    printf("enter the number of row ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char k;
        for(int j=1;j<=n;j++){
            k=64+j;
            printf("%c",k);
          
        }
        printf("\n");
    }
}