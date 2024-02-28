#include <stdio.h>
#include <stdlib.h>

int MaxSubarraySum(int arr[], int n)
{

    int max1 = 0, max2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            max2 = 0;
            for (int k = i; k <= j; k++)
            {
                max2 += arr[k];
            }
            if (max2 > max1)
            {
                max1 = max2;
            }
        }
    }
    return max1;
}

int main()
{
    int arr[] = {1, -2, 4, 5, -1, -5, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_sum = MaxSubarraySum(arr, size);
    printf("Max subarray sum: %d\n", max_sum);
}