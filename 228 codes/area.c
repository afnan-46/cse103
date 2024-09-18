// Write a C program which can input some country’s population and area. After that display
// number of countries which&#39;s population density is more than 500.
#include <stdio.h>

int main()
{
    float area;
    int counter=0;

    freopen("data.txt","r",stdin);
    for(int i=0; i<10; i++)
    {
        scanf("%f",&area);
        if(area>500)
        {
            counter++;
        }

    }

    printf("Number of area that's density is more then 500 is: %d",counter);

    return 0;
}
