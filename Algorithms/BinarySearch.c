#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - 1) / 2;
        if (arr[m] == x)
        {
            return m;
        }
        if (arr[m] < x)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 10, 20, 40, 80, 100, 120, 140, 160};
    int x = 120;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, n - 1, x);
    if (result == -1)
    {
        printf("Array doesnt containt element");
    }
    else
    {
        printf("Element found at index: %d", result);
    }
}