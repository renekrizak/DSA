#include <stdio.h>
#include <stdlib.h>

int MaxSubarraySum(int arr[], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum += arr[j];
            if (sum > max)
            {
                max = sum;
            }
        }
    }
    return max;
}

int main()
{
    int arr[] = {1, -2, 4, 5, -1, -5, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_sum = MaxSubarraySum(arr, size);
    printf("Max subarray sum: %d\n", max_sum);
}
