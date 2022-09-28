#include<stdio.h>
int main (){

int i,n,pos,kya=68;
printf("enter the size of array");
scanf("%d",&n);
int arr[20];
printf("enter the position");
scanf("%d",&pos);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){
printf(" the value in array is   %d\n",arr[i]);
}
n++;
printf("done");
for(i=n-1;i>=(pos);i--){
    arr[i]=arr[i-1];
}
arr[pos-1]=kya;
for(i=0;i<n;i++){
printf(" the value in array is   %d\n",arr[i]);
}
return 0;
}