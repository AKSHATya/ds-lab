#include<stdio.h>
int main (){

    int a,i,n;

int arr[20];
printf("enter the size of array");

scanf("%d",&n);


for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){

    printf("the value in array is %d \n",arr[i]);
}

for(i=0;i<(n/2);i++)
{
  a=arr[i];
  arr[i]=arr[n-1-i];
  arr[n-1-i]=a;
}

for(i=0;i<n;i++){

    printf("the reverse array is %d \n",arr[i]);
}
return 0;}
