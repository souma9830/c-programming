#include<stdio.h>
#include<string.h>
int main(){
    char* s1[]="soumadeep shee";
    char* s2[]="i am a boy";
    strncat(s1, s2);
    printf("%c",s1);
}