#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("Enter the two number");
    scanf("%d%d",&a,&b);
   int add=sum(a,b);
    printf("sum is %d",add);
}