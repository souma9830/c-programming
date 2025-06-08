#include<stdio.h>
int main(){
    int count=0;
    char a[]="i am a boy ";
    int i=0;
    while(a[i]!='\0'){
        count++;
        i++;
    }
    printf("The number of letter present in the array is %d",count);
}