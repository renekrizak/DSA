#include <stdio.h>
#include <stdlib.h>

/*There is a sequence of positive numbers, we want to find 2 numbers,
such that num1 + num2 = sum*/

int findSum(int arr[], int size, int sum, int *index1, int *index2)
{
    *index1 = 0;
    *index2 = size - 1;
    while (*index1 < *index2)
    {
        int currentSum = arr[*index1] + arr[*index2];
        if (currentSum == sum)
        {
            return 1;
        }
        if (currentSum < sum)
        {
            (*index1)++;
        }
        else
        {
            (*index2)--;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 40, 80, 160};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 17;
    int index1, index2;
    int result = findSum(arr, size, sum, &index1, &index2);
    if (result == -1)
    {
        printf("Sum was not found. ");
    }
    else
    {
        printf("Sum found at indexes: %d %d", index1, index2);
    }
}