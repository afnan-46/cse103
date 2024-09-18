/*Write a C program which can input some students' age of a particular class into an array and
display the number of teenager in that class.
Sample Input
6
40 30 10 10 15 15
Sample Output
2
*/
#include<stdio.h>
int main()
{
    int stuArr[100];
    int teenAger=0,num;
    freopen("hello.txt","r",stdin);
    scanf("%d",&num);
    for(int i=0; i<num; i++)
    {
        scanf("%d",&stuArr[i]);


    }
    for(int i=0; i<num; i++)
    {
        if(stuArr[i]>=12 && stuArr[i]<=20 )
            teenAger++;

    }
    printf("Number if teenagers is %d",teenAger);

    return 0;
}
