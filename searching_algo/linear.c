#include<stdio.h>
int main(){
    int n,i,a[10],num,j=0;
scanf("%d%d",&num,&n);
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
    
       if( num==a[i])
       printf("%d present at %d\n",a[i],i+1);
       else {j++;}
       }
       if(j==n)
       printf("num not present");
    
return 0;
}