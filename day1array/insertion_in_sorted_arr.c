#include <stdio.h>
int main()
{

    int i, n, val, kya = 1,pos=0,a;
    printf("enter the size of array");
    scanf("%d", &n);
    int arr[20];
    printf("enter the value");
    scanf("%d", &val);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf(" the value in array is   %d\n", arr[i]);
    }
    
    printf("done");
    for (i = n; i>=0&&arr[i]>val; i--)
    {
        arr[i] = arr[i - 1];
     pos++;
    }
    a=n-pos+1;   //////not valid for 1
        
    arr[a] = val;
    for (i = 0; i <=n; i++)
    {
        printf(" the value in array is   %d\n", arr[i]);
    }
    return 0;   
}