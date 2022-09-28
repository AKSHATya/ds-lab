#include<stdio.h>
int main (){

    int i,n,pos;

int arr[20];
printf("enter the size of array");

scanf("%d",&n);
printf("enter the index");
scanf("%d",&pos);

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){

    printf("the value in array is %d \n",arr[i]);
}
printf("done");
for(i=pos-1;i<n;i++){
    arr[i]=arr[i+1];

}
for(i=0;i<n-1;i++){

    printf("the value in array is %d \n",arr[i]);}
    

return 0;}