#include<stdio.h>
#include<string.h>  
int main(){
    struct book
    {
        char name[20];
        float price;
        int page;
    } book1,book2;
    book1.price=20.55;
    book1.page=200;
    strcpy(book1.name,"secreat seven");
    printf("The name of the book is %s\n",book1.name);
    printf("The Number of npages in books are %d",book1.page);
    
    
}
