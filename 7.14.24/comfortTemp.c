#include<stdio.h>
int main(){
  int count=2, comfort_T=0;
  float temparature,temp_Count=0;
   for(int i=0;i<count;i++){
       scanf("%f",&temparature);
       if(temparature>=22 && temparature <=26)
            comfort_T++;
   }

   printf("Days of Comfortable temperature is %d",comfort_T);
   return 0;
}
