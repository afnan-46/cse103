#include<stdio.h>

int findSum(int p){
int i,s;
s=0;
for(int i=1;i<=p;i++){
    s+=i;

}
return s;
}

int main(){
int x,ans;
scanf("%d",&x);
ans=findSum(x);
printf("%d",ans);


return 0;
}
