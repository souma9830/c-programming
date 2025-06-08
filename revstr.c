#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];
    puts("Enter The string");
    gets(arr);
    puts("The reverse string is ");
    int size=0;
    int i=0;
    while(arr[i]!='\0'){
        size++;
        i++;
    }
  
    for(int i=0,j=size-1;i<=j;i++,j--){
        
            char temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    
    puts(arr);

}