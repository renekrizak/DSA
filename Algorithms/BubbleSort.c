#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
}

int main()
{

    int arr[] = {21, 543, 41, 765, 3221, 53, 543, 423, 1, 0, 32};
    int size = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, size);
    printf("Sorted array: \n");
    printArray(arr, size);
}