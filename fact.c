 #include<Stdio.h>
 int facto(int x){
    return x*facto(x-1);
 }
 int main(){
    int x;
    printf("Enter the Number");
    scanf("%d",&x);
    int res=facto(x);
    printf("The factorial of this is %d",res);
    
 }