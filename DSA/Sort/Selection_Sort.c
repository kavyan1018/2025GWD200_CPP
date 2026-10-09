#include <stdio.h>

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;
    int i, j, temp, min;

    printf("\nBefore Sorting !! \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // sort
    for (i = 0; i < n - 1; i++)
    {
        min = i;

        // find min ele

        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        // swap
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }

    printf("\nAfter Sorting !! \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}