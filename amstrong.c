#include<stdio.h>
#include<math.h>
int main(){
    int num,org,n=0,result=0,remainder;
    printf("Enter the Number");
    scanf("%d",&num);
    org=num;
    while(org!=0){
        org/=10; 
        n++;
    }
    // printf("The digit present in this math is %d",n);
    org=num;
    while(org!=0){
        remainder=org%10;
        result=result+pow(remainder,n);
        org /=10;
    }
    printf("Result %d",result);
    if(result==num){
        printf("The word is pallindrom");
    }
    else printf("not");
   
}