#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int l, int r, int x)
{
    int result = -1;
    while (l <= r)
    {
        int mid = l + (r - 1) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            r = mid - 1;
        }
        if (arr[mid] < x)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
        }
    return result;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    int result = binarySearch(arr, 0, size - 1, x);
    if (result == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at: %d", result);
    }
}