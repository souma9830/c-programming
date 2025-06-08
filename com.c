#include<stdio.h>
int main()
{
   int n,res=1;
   printf("Enter the nmber");
   scanf("%d",&n);
   for(int i=n;i>=1;i-- ){
    res=res*i;

   }
   printf(" is %d",res);
}