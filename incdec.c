#include<stdio.h>
int incdec(int x){
    if(x==0) return;
    printf("%d\n",x);
    incdec(x-1);
    return;
}
int acc(int x){
    if(x==0) return;
    acc(x-1);
    printf("%d\n",x);
}
int main(){
    int x=5;
    incdec(x);
    acc(x); 
 }