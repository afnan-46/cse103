 #include<stdio.h>
 int main(){

   int x[10],y[10];
    int sum_x = 0,sum_y=0,count;
    float ratio;
    float Average;

    printf("Enter the marks of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d%d", &x[i],&y[i]);

    }
     for (int i = 0; i < 10; i++) {

   sum_x+= x[i];
   sum_y+= y[i];

    }
int total_sum=sum_x+sum_y;
Average=total_sum/10;


 printf("Grace marks is:%f",Average);

 return 0;
 }

