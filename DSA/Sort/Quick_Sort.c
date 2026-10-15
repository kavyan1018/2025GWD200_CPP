#include <stdio.h>

void QuickSort(int arr[], int low, int high)
{

    int i, j, pivot, temp;

    if (low < high)
    {
        pivot = arr[high];
        i = low - 1;

        for (j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;

                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int pi = i + 1;

        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[] = {5, 3, 4, 1, 2, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("\n Original Array :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // functions
    QuickSort(arr, 0, n - 1);

    printf("\n Sorted Array :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}