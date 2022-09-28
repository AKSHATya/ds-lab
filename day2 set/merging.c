#include <stdio.h>
void merge(int n, int k, int a[], int b[])
{

    int i, j, m, l;

    m = k + n;
    int c[m];
    i = 0;
    j = 0;
    l = 0;

    while (i < k && j < n)
    {
        if (b[i] < a[j])
        {
            c[l] = b[i];
            i++;
            l++;
        }
        else if (b[i] > a[j])
        {
            c[l] = a[j];
            j++;
            l++;
        }
        else
        {
            c[l++] = b[i++];
            c[l++] = a[j++];
        }
    }

    while (i < k)
        c[l++] = b[i++];
    while (j < n)
        c[l++] = a[j++];
    for (i = 0; i < m; i++)
    {
        printf("%d ", c[i]);
    }
}
int main()
{
    int i, n, k;
    scanf("%d%d", &n, &k);
    int a[n], b[k];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < k; i++)
    {
        scanf("%d", &b[i]);
    }

    merge(n, k, a, b);

    return 0;
}