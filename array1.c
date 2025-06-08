#include<Stdio.h>
int main(){
    int n;
    printf("Enter the Array size");
    scanf("%d",&n);
   int a[n];
   printf("Enter the array digit: ");
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   printf("The reverse array is ");
   for(int i=n-1;i>=0;i--){
    printf("%d ",a[i]);
   }

}