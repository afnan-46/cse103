#include <stdio.h>

int main() {
    int marks[10];
    int sum = 0;
    float average;
    int countAboveAverage = 0;

    printf("Enter the marks of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    average = sum / 10.0;

    for(int i = 0; i < 10; i++) {
        if (marks[i] > average)
            countAboveAverage++;
    }

    printf("\nAverage marks: %.2f", average);
    printf("\nNumber of students who scored above average: %d", countAboveAverage);

    return 0;
}
