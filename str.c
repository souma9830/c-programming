#include<stdio.h>
int main(){
    char str1[100];
    gets(str1);
    int count=0,i=0;
    while(str1[i]!='\0'){
        count++;
        i++;
    }
    printf("The alphabet present in the string is %d",count);
}