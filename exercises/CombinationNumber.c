#include <stdio.h>
#include <stdlib.h>

long long CombinationNumber(int n, int k)
{
    if (k > n - k)
    {
        k = n - k;
    }

    long long result = 1;
    for (int i = 0; i < k; i++)
    {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main()
{
    int n, k;
    printf("Input n & k for combination number: ");
    scanf("%d %d", &n, &k);

    long long result = CombinationNumber(n, k);
    printf("Combination number %d above %d is: %lld", n, k, result);
}