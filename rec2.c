#include<stdio.h>
int dec(int n){
     if(n==0) return dec;
     dec(n-1);
     printf("%d\n",n);
     return dec;
}
int main(){
    int x=5;
    dec(x);
 }