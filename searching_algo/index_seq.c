
int linear(int a[], int lo, int hi, int num)
{
    int i, j = 0;
    int n = hi - lo + 1;
    for (i = lo; i < hi; i++)
    {

        if (num == a[i])
        {
            printf("%d present at %d\n", a[i], i + 1);
            break;
        }
        else
        {
            j++;
        }
    }
    if (j == n)
        printf("num not present");

    return 0;
}

int index(int a[], int lo, int hi, int x)
{
    int n = hi - lo + 1;
    int b[n / 3 + 1], i = 0;
    for (i = 0; i < n / 3 + 1; i++)
    {
        b[i] = i*3; // group = 3 isliye 3 ka multiple
    }

    while (i < n / 3 + 2)
    {
        if (b[i] <= x)
        {
            i++;
        }
        else
        {
            linear(a, b[i - 1], b[i], x);
            break;
        }
    }
    return 0;
}

int main()
{
    int a[5], x, i, n = 6;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);

    index(a, 0, 5, x);

    return 0;
}
