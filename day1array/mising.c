#include<stdio.h>
int main (){

    int a=1,i,n;

int arr[20];
printf("enter the size of array");

scanf("%d",&n);
//printf("enter the index");  not valid for more than 2 num
//scanf("%d",&pos);

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){

    printf("the value in array is %d \n",arr[i]);
}

for(i=0;i<n;i++){
    if(arr[i]!=a){
    printf("the missing num is %d",a);
    break;
    }
    a++;
}



return 0;}