#include<stdio.h>
int sum(int a,int b){
    int total=a+b;
    return total;
}
int main(){
    int num1,num2,res;
    printf("Enter the two number");
    scanf("%d%d",&num1,&num2);
    res=sum(num1,num2);
    printf("The result is %d",res);
}