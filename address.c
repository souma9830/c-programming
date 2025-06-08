#include<Stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int* ptr=&arr[5];
    for(int i=0;i<5;i++){
        printf("The adreess of each element in the array is %u \n",&arr[i]);
    }
}