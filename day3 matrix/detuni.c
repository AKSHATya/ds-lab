#include<stdio.h>
#include<math.h>
int main()
{
    int m,i,j,k=0,l=0;
    scanf("%d",&m);
    int a[m][m];
    for(i=0;i<m;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m-1;i++){
        for(j=0;j<m;j++){
            for(i=0;i<m-2;i++){
            l=j+pow(-1,j);
            k+=pow(-1,j)*a[i][j]*a[i+1][l];}

        }
    }
     printf("%d",k);

   return 0;
}