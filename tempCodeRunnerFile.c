#include<Stdio.h>
#include<string.h>
int main(){
    char str1[50];
    char str2[50];
    printf("Enter the 1st string ");
    gets(str1);
    int len1=0,i=0;
    while(str1[i]!='\0'){
        len1++;
        i++;
    }
    printf("\nThe length of the string is %d",len1);
      printf("\nEnter the 2nd string ");
    gets(str2);
     int len2=0,j=0;
     while(str2[j]!='\0'){
        len2++;
        j++;
    }
    printf("\nThe length of the string is %d",len2);
    int tot;
    tot=len1+len2;
    printf("\nThe total length of the string is %d",tot);

    for(int i=len1;i<=tot;i++){
        str1[i]=str2[i];
    }
    printf("\nthe concatenate string is %s",str1);
}