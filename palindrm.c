#include<stdio.h>
int main(){
    int num,remain,res,org;
    printf("Enter the number");
    scanf("%d",&org);
    num=org;
    while(num!=0){
        remain=num%10;
        res=res*10+remain;
        num/=10; 
     }
     if(res==org){
        printf("The number is a palindrom number");
     }
     else{
        printf("The number is not a palindrom");
     }
}