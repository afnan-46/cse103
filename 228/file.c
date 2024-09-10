#include<stdio.h>
#include<string.h>
int main(){

 int x[100],n,s=0,p;
 char name[30][100];
 int c;

freopen("Data.txt","r",stdin);
freopen("data1.txt","w",stdout);
 scanf("%d",&n);
 for(int i=0;i<n;i++){
    scanf("%s",name[i]);
    scanf("%d",&x[i]);

 }
s=0;
for(int i=0;i<n;i++){

   s+=x[i];
}
for(int i=0;i<n;i++){
    c=0;
 p=strlen(name[i]);
   for(int j=0;j<p;j++){
    if(name[i][j]=='a'||name[i][j]=='e'||name[i][j]=='i'||
    name[i][j]=='o'||name[i][j]=='u'||name[i][j]=='A'||
    name[i][j]=='E'||name[i][j]=='I'||name[i][j]=='O'||name[i][j]=='U')
    c++;
   }
if(c>2){
    printf("%s\n",name[i]);
}
}


printf("output: %f", s/(float)n);
fcloseall;
    return 0;
}

