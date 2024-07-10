#include<stdio.h>
int main(){
    int counter;
    int size;
    int persons;
    printf("Enter size of input");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        scanf("%d",&persons);
        if(persons>=18)
            counter++;



    }

 printf("Total eligible voters: %d persons ",counter);



    return 0;
}
