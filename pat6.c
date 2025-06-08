#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int k=1;
        for(int j=1;j<=i;j+=1){
            printf("%d ",k);
            k+=2;
        }
        printf("\n");
    }
}