#include <stdio.h>
#include <stdlib.h>

int WholeNumberSqrt(int x)
{
    if (x < 2)
    {
        return x;
    }
    int low = 0, high = x, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        long long square = (long long)mid * mid;
        long long squareNext = (long long)(mid + 1) * (mid + 1);
        if (square <= x && x < squareNext)
        {
            return mid;
        }
        else if (square < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Whole number square root of %d is: %d", x, WholeNumberSqrt(x));
}