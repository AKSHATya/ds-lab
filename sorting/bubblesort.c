#include<stdio.h>
int main(){
    int a[100],size,i,k,j;
    scanf("%d",&size);
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {   
        for(j=0;j<size-1;j++){
            if(a[j]>a[j+1]){
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

    return  0;
}