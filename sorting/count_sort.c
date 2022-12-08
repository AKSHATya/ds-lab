#include <stdio.h>
int main()
{
    int a[10], b[10], c[10] = {0}, j=0, size, i;
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        c[a[i]] += 1;
    }
    
    j=0;
     for (i = 0; i <= 9; i++)
    {
        if (c[i]!=0){
        b[j]=i;
        j++;
        c[i]-=1;
        i--;
        }
    }
    for (i = 0; i <size; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}