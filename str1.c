#include<stdio.h>
int main(){
    char a[]="Hello world i am the best in the world";
    int i=0;
    while(a[i]!='\0'){
        printf("%c",a[i]);
        i++;
    }
}