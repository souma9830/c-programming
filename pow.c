#include<stdio.h>
#include<math.h>
int power(int a,int b){
    if(b==0) return 1;
   int real=a*power(a,b-1);
   return real;
}
int main(){
    int a,b;
    printf("Enter the number of the which ");
    scanf("%d%d",&a,&b);
    int res=power(a,b);
    printf("the ultimate result is %d",res);
}