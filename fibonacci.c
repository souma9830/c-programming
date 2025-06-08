#include<Stdio.h>
int fibo(int n)
{
    if(n==1 || n==2) return 1;
    int result;
    result=fibo(n-1)+fibo(n-2);
    return result;
}
int main(){
    int n;
    printf("Enter the Number");
    scanf("%d",&n);
    printf("The sum is %d",fibo(n));
}