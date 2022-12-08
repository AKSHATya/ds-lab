#include<stdio.h>

int powr(int a,int n,int fact){

if(n==1){
    return fact;
}
else{
    return powr(a,n-1,a*fact);
}
}

int main(){
    int a,n,fact,value;
scanf("%d%d",&a,&n);
value=powr(a,n,a);
printf("%d",value);
return 0;
}