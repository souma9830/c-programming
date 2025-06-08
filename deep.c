#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="Physics Wallah";
    int i=0,size=0;
    while(s1[i]!='\0'){
        size++;
        i++;
    }
    char s2[size];
    for(int i=0;i<=size;i++){
        printf("%c",s1[i]);
    }
}
