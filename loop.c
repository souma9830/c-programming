#include<stdio.h>
#include<math.h>
int main(){
    int n,x;
    float result=0;
    printf("Enter the number of n and x ");
    scanf("%d%d",&n,&x);
    for(int i=1;i<=n;i++){
        result=(pow(x,i)/i);
    }
    float act;
    act=result+1;
    printf("The actual result is %f",act);
} 