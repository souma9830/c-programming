#include<Stdio.h>
void swap(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int a,b;
    printf("Enter the two numbver");
    scanf("%d%d",&a,&b);
    int res;
    swap(&a,&b);
    printf("The ultikmtae result is %d and %d ",a,b);
}