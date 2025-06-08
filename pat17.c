#include<Stdio.h>
int main(){
    int n,m;
    int k=1;
    printf("enter the number");
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
}