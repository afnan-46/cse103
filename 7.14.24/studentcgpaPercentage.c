#include<stdio.h>
int main(){
  
 int scount,percentage=0,j;
 float cgpa;
 printf("Enter the number of students: ");
scanf("%d", & scount);

printf("Enter the CGPA of each student:\n");
for(int i=1; i<=scount; i++) {
    printf("Enter CGPA for student %d: ", i);
    scanf("%f", &cgpa);
    
    if(cgpa > 3.5) {
       percentage++;

    }
}

    float output= ((float)percentage/scount)*100;
    printf("%f ",output);

    return 0;
 }






