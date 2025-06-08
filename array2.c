#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number of Student Present in the Class");
    scanf("%d",&n);
    int a[n];
    printf("Please Put their marks they achived respectively");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("The Student who gots below 35 His roll Number is:");
    for(int j=0;j<n;j++){
        if(a[j]<35){
            printf("%d ",j);
        }
    }
}