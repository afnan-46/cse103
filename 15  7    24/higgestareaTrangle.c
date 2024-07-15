#include<stdio.h>
#include<math.h>
int main(){
  int x,y,z;
  float s,H_area=0,area_T=0,area;

  for(int i=1;i<=5;i++){
    printf("Enter values for %d triangle: ",i);
    scanf("%d%d%d",&x,&y,&z);
  s=(x+y+z)/2.0;
    area = sqrt(s * (s - x) * (s - y) * (s - z));
 if(area>H_area)
    H_area=area;



  }
   printf("%f",H_area);



    return 0;
}

