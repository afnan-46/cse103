#include <stdio.h>



int main() {
    int arr1[5];
    int arr2[5];


    printf("Enter ");
    for (int i = 0; i < 5; i++) {
             for (int j = 0; j < 5; j++) {
                scanf("%d%d",&arr[i],&arr[j]);
             }
    }




 int even_count = 0;

     for (int i = 0; i < 5; i++) {
             for (int j = 0; j < 5; j++) {

               int sum=arr1[i]+arr2[j];
                  if (sum % 2 == 0)
            even_count++;


             }
    }

    printf("Count of even sums: %d\n", even_count);

    return 0;
}
