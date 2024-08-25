 #include<stdio.h>
 int main(){

   int x[10],y[10];
    int sum = 0,count;
    float ratio;
    int countAboveAverage = 0;

    printf("Enter the marks of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d%d", &x[i],&y[i]);

    }
     for (int i = 0; i < 10; i++) {

    if(x[i]<y[i])
        count++;
    }


 ratio=(count/10.0)*100;
 printf("%.2f",ratio);
 printf("%");

 return 0;
 }
