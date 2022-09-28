#include<stdio.h>
int main(){
    int i,n,k,j,m,l;
scanf("%d%d",&n,&k);
int arr[n],ar[k];
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}  ///aub--aintb
for(i=0;i<k;i++){
scanf("%d",&ar[i]);
}
m=k+n;
int arrr[m];
i=0;j=0;l=0;
while (i<k&&j<n){
    if(ar[i]<arr[j]&&i<k){
    //arrr[l]=ar[i];
    i++;//l++;
}
else if(ar[i]>arr[j]&&j<n){
    //arrr[l]=arr[j];
    j++;//l++;
}
else {
    arrr[l++]=ar[i++];
    j++;
}
}
//while(i<k)arrr[l++]=ar[i++];
//while(j<n)arrr[l++]=arr[j++];
for(i=0;i<l;i++){
printf("%d ",arrr[i]);
}


return 0;
}