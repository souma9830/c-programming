#include<stdio.h>
#include<string.h>
int main(){
    char str[15];
    printf("Enter your name");
    gets(str);
    puts(str);
    printf("The reverse string is ");
    int k=0;
    int size=0;
    while(str[k]!=0){
        size++;
        k++;
    }
    printf("The size of the array is %d",size);
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("The reverse string is ");
    puts(str);
}