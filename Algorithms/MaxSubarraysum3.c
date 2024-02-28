#include <stdio.h>
#include <stdlib.h>

int MaxSubarraySum(int arr[], int size)
{
    int m = 0;
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        k = (k > 0 ? k : 0) + arr[i];
        if (k > m)
        {
            m = k;
        }
    }
    return m;
}

int main()
{
    int arr[] = {1, -2, 4, 5, -1, -5, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_sum = MaxSubarraySum(arr, size);
    printf("Max subarray sum: %d\n", max_sum);
}