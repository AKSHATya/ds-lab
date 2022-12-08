#include<stdio.h>

int factorial(int n,int fact){

if(n==0||n==1){
    return fact;
}
else 
return factorial(n-1,n*fact);

}



int main(){
int n,value;
scanf("%d",&n);
value=factorial(n,1);

printf("%d",value);

return 0;
}