int interpolate(int arr[], int lo, int hi, int x)
{
    int pos;                                       // best case complexity O(log2(log2n))
                                                  //  worst case complexity O(n)
    if (lo <= hi && x >= arr[lo] && x <= arr[hi])
    {

        pos = lo + (((double)(hi - lo) / (arr[hi] - arr[lo])) * (x - arr[lo]));

        // found the x
        if (arr[pos] == x)
            return pos;

        // binary search
        if (arr[pos] < x)
            return interpolate(arr, pos + 1, hi, x);
        if (arr[pos] > x)
            return interpolate(arr, lo, pos - 1, x);
    }
    return -1;
}

