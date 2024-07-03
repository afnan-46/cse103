#include<stdio.h>

int main(){
int chips;
scanf("%d",&chips);
int a,b,c;
a=(chips/4)*3;
b=chips%4;
c=a+b;
printf("We have to pay for:\t%d\nand amount is:\t%d",c,(c*10));







return 0;

}
