#include<stdio.h>
#include<Math.h>

int main(){

int a,b;

    printf("Enter hour and minutes");
     scanf("%d%d",&a,& b);
     //printf("%d %d",a ,b);

    float angle_Hour;
    angle_Hour =        ((0.5*b)+(30*a));
    float angle_minutes;
    angle_minutes=  (6*b);

    if(angle_Hour>angle_minutes){
        printf("Angle between hour and minutes is %f",(angle_Hour-angle_minutes));
    }
     else
        printf("Angle between hour and minutes is %f",angle_minutes-angle_Hour);



    return 0;

}
