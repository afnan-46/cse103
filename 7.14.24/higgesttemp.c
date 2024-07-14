#include<stdio.h>
int main(){
  int count=7,n=0;
  float temparature,avg,temp_Count=0;
   for(int i=0;i<count;i++){
   scanf("%f",&temparature);
    temp_Count+=temparature;
    n++;
   }
   printf(" avarage temparature is  %f",(float)temp_Count/n);




    return 0;
}