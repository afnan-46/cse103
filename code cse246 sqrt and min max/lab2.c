
#include<stdio.h>
void findminMax_Values(int arr[], int n){
int min= arr[0];
int max=arr[0];
int comp = 0;
for(int i=1;i<n;i++){
    comp++;
    if(arr[i]<min){
        min=arr[i];
    }
    if(arr[i]>max){
        max=arr[i];
    }
}
printf("minimum element in array:%d\n",min);
printf("maximum element in array:%d\n",max);
printf("number of comparisons in array:%d\n",comp);

}
int main(){
    int arr1[]={16,19,5,13,2};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    findminMax_Values(arr1,size1);

     int arr2[]={16,19,5,13,2};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    findminMax_Values(arr2,size2);

}
