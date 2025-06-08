#include<stdio.h>
#include<string.h>
int main(){
    struct book
    {
        char name[50];
        int price;
        int page;
    }book1,book2,book3;
    book1.page=100;
    strcpy(book1.name,"secretseeven");
    printf("%c",book1.name);
}