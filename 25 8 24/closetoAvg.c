#include<stdio.h>
int main(){
   int x[10],sum,count;
   float avg;

for(int i=0;i<10;i++){
    scanf("%d",&x[i]);
}

for(int i=0;i<10;i++){
  sum+=x[i];
}

avg=((float)sum/10);

 for(int i=0;i<10;i++){
    if(x[i]>(avg-3) && x[i]<(avg+3))
        count++;
 }

 printf("Close to avarage marks are:%d",count);


return 0;
}

