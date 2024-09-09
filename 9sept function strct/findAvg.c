#include <stdio.h>

float findAvg(int count) {
    int num;
    float sum = 0.0;


    for (int i = 0; i < count; i++) {
        scanf("%d", &num);
        sum += num;
    }


    return sum / count;
}

float Mul(int n){
int num;
int multiplies;

for(int i=0;i<n;i++){
    scanf("%d",&num);
    multiplies*=num;
}
return multiplies;
}

int main() {
    int x,y;
    float avg;
    int multi;



    printf("Enter the number of elements: ");
    scanf("%d", &x);
    printf("Enter the number of inputs for multiplies:");
    scanf("%d",&y);

printf("Enter %d numbers:\n", x);
avg = findAvg(x);
printf("The average is: %.2f\n", avg);

multi=Mul(y);
printf("Multiplication is:%d ",multi);
    return 0;
}
