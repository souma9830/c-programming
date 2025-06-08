#include<stdio.h>
#include<math.h>
int sqr(int a){
    return sqrt(a);
}
int main(){
    int a;
    printf("Enter the number");
    scanf("%d",&a);
    int su=sqr(a);
    printf("The root is %d",su);
}