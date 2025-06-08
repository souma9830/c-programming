#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char k=64;
        for(int j=1;j<=i;j++){
           k=64+j;
           printf("%c",k); 
        }
        printf("\n");
    }
}