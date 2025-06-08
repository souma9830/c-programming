#include<stdio.h>
int main(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    int res=1;
    int sum=0;
    for(int i=1;i<=n;i++){
        int k=0;
        for(int j=1;j<=i;j++){
            
            k+=res;
            res+=2;
        } 
        sum+=k;
    }
    printf("The sum is %d",&sum);
}