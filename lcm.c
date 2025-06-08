#include<stdio.h>
int Gcd(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
     return a;
}
int lcm(int a,int b){
    return (a*b)/Gcd(a,b);
}
int main(){
    int num1,num2;
    printf("ENter the two number");
    scanf("%d%d",&num1,&num2);
    int result=lcm(num1,num2);
    printf("The lcm is %d and %d is %d",num1,num2,result);
    
}