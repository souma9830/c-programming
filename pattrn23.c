#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
     
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        int a=i-1;
        for(int m=1;m<=i-1;i++){
            printf("%d",a);
           
        }
        printf("\n");
    }
}