
#include<stdio.h>
int main(){

int x,y;

scanf("%d%d",&x, &y);

int height=ceil(x/3.0);
int weight=ceil(y/3.0);
int totalTiles=height*weight;


printf("%d", totalTiles);


return 0;

}
