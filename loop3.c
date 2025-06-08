#include<stdio.h>
int main(){
    int n,x;
    int sum=0,k=0;
    printf("Enter the number");
    scanf("%d%d",&x,&n);
    for(int i=1;i<=n;i++)
        {
            k=k*10+3;
        sum+=k;     
      }
      printf("%d",sum);

    }
