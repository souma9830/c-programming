#include<stdio.h>
#include<String.h>
int main(){
  typedef struct student
  {
    char name[15];
    int roll;
    int marks;
    int class;
  }student;
  student st[4];
  strcpy(st[0].name,"Soumadeep");
  st[0].roll=1;
  st[0].marks=98;
  st[0].class=5;
  strcpy(st[1].name,"Alak");
  st[1].roll=2;
  st[1].marks=95;
  st[1].class=6;
  strcpy(st[2].name,"deep");
  st[2].roll=3;
  st[2].marks=75;
  st[2].class=7;
  strcpy(st[3].name,"Ram");
  st[3].roll=5;
  st[3].marks=58;
  st[3].class=8;
  for(int i=0;i<4;i++){
    printf("%s\n",st[i].name);
    printf("%d\n",st[i].class);
    printf("%d\n",st[i].marks);
    printf("%d\n",st[i].roll);
  }
}