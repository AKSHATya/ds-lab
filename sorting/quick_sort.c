#include <stdio.h>
void swap(int a[], int i, int j)
{
    a[i] = a[i] ^ a[j];
    a[j] = a[i] ^ a[j];
    a[i] = a[i] ^ a[j];
}
int partion_algo(int a[], int low, int high)
{

    int i, j, pivot;
    i = low;
    j = high + 1;
    pivot = low;
    do
    {
        do
        {
            i++;

        } while ((a[i] < pivot));
        do
        {
            j--; /* code */
        } while ((a[j] > pivot));

        if (i > j)
        {
            swap(a, i, j);
            // i++; j--;
        }

    } while (i < j);
    swap(a, j, pivot);
    return j;
}

void quick_sort(int a[], int low, int high)
{
    int j;
    j = partion_algo(a, low, high);
    quick_sort(a, low, j - 1);
    quick_sort(a, j + 1, high);
}

int main()
{
    int i, a[] = {2, 1, 25, 64, 33, 12, 15};
    a[7] = 65;
    quick_sort(a, 0, 6);
    for (i = 0; i < 7; i++){
        printf("%d  ", a[i]);}
    return 0;
}