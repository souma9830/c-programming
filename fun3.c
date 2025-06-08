#include<stdio.h>
int comb(int n){
    int factn=1;
    for(int i=n;i>=1;i--){
        factn=factn*i;
    }
    return factn;
}
int nrfact(int n, int r){
    int nrfact;
    for(int k=n-r;k>=1;k--){
        nrfact=nrfact*k;
    }
    return nrfact;
}
int combination(int n, int r){
    int res;
    res=comb(n)/(comb(r)*nrfact(n,r));
}
int main(){
    int n,r;
    printf("Enter the two number which you want to combination it");
    scanf("%d",&n);
    int nfact;
    nfact=comb(n);
    printf("The result is %d\n",nfact);
    int rfact;
    rfact=comb(r);
    printf("The result of combination of r is %d\n",rfact);
    int nrfacto;
    nrfacto=nrfact(n,r);
    printf("The result of combination of r is %d\n",nrfacto);
    int final;
    final = combination(n,r);
    printf("The final result is %d",final);
}
