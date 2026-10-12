#include <stdio.h>

int main()
{
    int arr[] = {5, 3, 4, 1, 2, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j, key;

    printf("\nOriginal Array :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // ins sort
    for (i = 0; i < n; i++)
    {
        key = arr[i];
        j = i - 1; // i = 0 -> 5    // j 0 - 1 = -1   // i++ -> i = 1 , j 1-1 = 0

        while (j >= 0 && arr[j] > key) // i -> key     // 0 > 1 (5 > 3)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }

    printf("\nSorted Array :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}