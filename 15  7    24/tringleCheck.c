#include<stdio.h>
int main(){
  int a,b,c;
  int counter1,counter2,counter3;


  for(int i=0;i<3;i++){
    scanf("%d%d%d",&a,&b,&c);

  if(a==b || b==c || a==c){
    counter1++;
  }
    else if((a==b && b!=c) || (b==c && a!=b) || (a==c && c!=b)  )
        counter2++;

        else
        counter3++;


  }
printf(" somobahu %d\n",counter1);
printf("somodi bahu %d\n",counter2);
printf("bisomo bahu %d\n",counter3);



return 0;
}
