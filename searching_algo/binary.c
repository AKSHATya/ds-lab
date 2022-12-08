#include <stdio.h>
int main()
{
    int num, a[100], n, l = 0, h = 0, mid = 0;
    scanf("%d%d", &num, &n);
    h = n - 1;
    for (l = 0; l < n; l++)
    {
        scanf("%d", &a[l]);
    }
    l=0;
    mid = (l + h) / 2;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (num < a[mid])
        {
            h = mid - 1;
        }
        else if (num > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            printf("%d present at %d", a[mid], mid + 1);
            break;
        }
    }
    if (l > h)
        printf("num not present");

    return 0;
}