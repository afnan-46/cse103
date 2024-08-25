#include<stdio.h>
int main(){
   int x[10],sum;
   float avg;

for(int i=0;i<10;i++){
    scanf("%d",&x[i]);
}

for(int i=0;i<10;i++){
  sum+=x[i];
}
printf("%.2f",(float)sum/10);


return 0;
}
