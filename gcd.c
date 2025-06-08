#include<stdio.h>
int GCD(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int num1,num2;
    printf("Enter the two number which you want to be gcd");
    scanf("%d%d",&num1,&num2);
    int result;
    result=GCD(num1,num2);
    printf("The gcd of %d and %d is %d",num1,num2,result);
    return 0;
}