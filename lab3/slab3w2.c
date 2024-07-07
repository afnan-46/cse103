#include<stdio.h>
int main(){
 int age1,age2;
 scanf("%d",&age1);
 scanf("%d",&age2);

 if(age1>age2)
{
    int diffAge=age1-age2;
    printf("Age differnce is %d",diffAge);
}

printf("age difference is %d",(age2-age1));



    return 0;
}
