#include<stdio.h>
int main(){
int i,j;

printf("enter the size of array");

scanf("%d",&i);

int arr[i];

for(j=0;j<=i-1;j++){
scanf("%d",&arr[j]);    
}

for(j=0;j<=i-1;j++){
printf("the data in array is %d\n",arr[j]);

}

return 0;

}