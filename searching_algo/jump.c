#include <stdio.h>
#include <math.h>


/*int main()
{
    int n, i, k, j = 0, b, v = 1;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);//only for sorted array//
    }
    scanf("%d", &k);
    b = n / (sqrt(n));
    i = b;
    while (i < n)
    {
        if (a[i] == k)
        {
            printf("%d %d", a[b], b + 1);
            v += 1;
            break;
        }
        else if (a[i] > k)
        {
            i += b;
        }
        else
            break;
    }

    for (j = i - b; j < i; j++)
    {
        if (a[j] == k)
        {
            printf("%d %d", a[i], j + 1);
            v += 1;
            break;
        }
    }
    if (v != 1)
        printf("num not present");
    return 0;
}*/





 
int jumpSearch(int arr[], int n, int key)
{
	   // keep track of the previous end 
    int start = 0;

    // a good jump size is square root of the array length
    int end = sqrt(n);
    
    while(arr[end] < key && end < n){
        start = end;
        end = end + sqrt(n);
        if(end > n - 1)
           end = n-1;
    }
    
    //perform linear search in selected subarray/block
	   for(int i = start; i <= end; i++) { 
      if(arr[i] == key)
         return i; //return position of the key
    }
    return -1;
}
 

int main(void)
{
   
    int arr[] = { 8, 23, 45, 56, 67, 89, 90, 100, 103} ;
  
    
    int key = 100;
  
    // n - size of array (found by dividing size of 
    // entire array by size of single element from the array
    int n = sizeof(arr) / sizeof(arr[0]);
   
    
    int result = jumpSearch(arr, n, key);
    if(result == -1){
        printf("Element is not in the array :-(");
    } else {
        printf("Element found at position : %d ",result);
    }
    return 0;
}