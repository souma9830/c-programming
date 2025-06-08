#include<stdio.h>
int inc(int x,int n ){
    if(x>n) return;
    printf("%d\n",x);
    inc(x+1,n);
    return;
}
int main(){
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    inc(1,x);
}