#include<stdio.h>
int main(){
    int arr[3][3]={1,0,1,0,0,1,1,1,1};
    int mcount=0;
    int idx=-1;

    for(int i=0;i<3;i++){
        int count=0;
        for(int j=0;j<3;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(mcount<count){
            mcount=count;
            idx=i;
        }
    }
    printf("The heighest number of 1 presnet is %d\n",mcount);
    printf("And its index number is %d",idx);

}