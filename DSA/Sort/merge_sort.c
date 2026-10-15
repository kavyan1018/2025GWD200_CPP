#include <stdio.h>

// logic
void merge(int arr[], int left, int mid, int right)
{

    int i = left;
    int j = mid + 1;
    int k = 0;
    int temp[100];

    while (i <= mid && j <= right) // 5, 3, 4, 1, 2, 7, 6   -> 7 / 2   -> 3(1)
    {

        // left to mid -> 5, 3, 4
        // mid to right -> 1, 2, 7, 6

        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while (j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // temp ->  original

    for (i = left, k = 0; i <= right; i++, k++)
    {
        arr[i] = temp[k];
    }
}

void mergeSort(int arr[], int left, int right)
{

    if (left < right)
    {
        int mid = (left + right) / 2;

        // left
        mergeSort(arr, left, mid);

        // right
        mergeSort(arr, mid + 1, right);

        // merge
        merge(arr, left, mid, right);
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
    mergeSort(arr, 0, n - 1);

    printf("\n Sorted Array :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}