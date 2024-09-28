#include<stdio.h>
int main(){
   struct student{
   char name[100];
   int roll;
   float cgpa;
   char age;

   };
int s;
 struct student x[10];


 for(int i=0;i<3;i++){
 scanf("%s",&x[i].name);
 scanf("%C",&x[i].age);
 scanf("%d",&x[i].roll);
 scanf("%f",x[i].cgpa);


 }

 for(int i=0;i<3;i++){
    s=s+x[i].age;
 }
return 0;
}