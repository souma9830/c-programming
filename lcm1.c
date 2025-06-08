#include<Stdio.h>
int lcm(int a, int b){
    int max;
    max=(a>b)?a:b;
    while(1){
        if(max%a==0 && max%b==0){
            return max;
        }
        max++;
    }
}
int main(){
    int a,b;
    printf("Enter the two number");
    scanf("%d%d",&a,&b);
    int res=lcm(a,b);
    printf("The lcm is %d",res);
}