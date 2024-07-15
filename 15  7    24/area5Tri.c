#include<stdio.h>
#include<math.h>
int main(){
  int x,y,z;
  float s,area,area_T;

  for(int i=1;i<=5;i++){
    printf("Enter values for %d triangle: ",i);
    scanf("%d%d%d",&x,&y,&z);
  s=(x+y+z)/2.0;
    area = sqrt(s * (s - x) * (s - y) * (s - z));
  area_T+=area;



  }
   printf("%f",area_T);



    return 0;
}
