#include<stdio.h>
int main(){
    int i,n,k,j,m,l;
scanf("%d%d",&n,&k);
int a[n],b[k];
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<k;i++){
scanf("%d",&b[i]);
}
m=k+n;
int c[m];
i=0;j=0;l=0;
while (i<k&&j<n){
    if(b[i]<a[j]&&i<k){
    c[l]=b[i];
    i++;l++;
}
else if(b[i]>a[j]&&j<n){
    c[l]=a[j];
    j++;l++;
}
else {
    i++;
    j++;
}
}
while(i<k)c[l++]=b[i++];
while(j<n)c[l++]=a[j++];
for(i=0;i<l;i++){
printf("%d ",c[i]);
}


return 0;
}