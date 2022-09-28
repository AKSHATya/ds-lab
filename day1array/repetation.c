#include <stdio.h>
int main()
{

    int i, n, j;

    int a[20], b[9] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[a[i]] += 1;
    }

    for (i = 0; i < 9; i++)
    {
        if (b[i] >= 2)
            printf("%d   %d\n", i,b[i]);
    }

    return 0;
}