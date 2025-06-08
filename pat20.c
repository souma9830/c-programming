#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        char m=64;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            m=64+k;
            printf("%c",m);
          
        }
        printf("\n");
    }
}