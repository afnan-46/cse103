#include<stdio.h>
int main(){
  int x,y;
  int c,d,e,f;
   c=d=e=f=0;
  for(int i=0;i<5;i++){
    scanf("%d %d",&x,&y);
    if(x>0 && y>0)
     c++;

     else if(x<0 && y>0){
      d++;

     }
     else if(x<0 && y<0)
   e++;


 else if(x>0 && y<0)
    f++;
  }
 printf("1st Q %d\n ",c);
 printf("1st Q %d\n ",d);
 printf("1st Q %d\n ",e);
 printf("1st Q %d\n ",f);




      return 0;
  }











