#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{

    int low = 0;
    int high = size - 1;

    // step 1... mid find

    while (low <= high)
    {
        int mid = (low + high) / 2; // mid

        // mid and key comp

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key > arr[mid])
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

    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    int key;

    printf("Enter the Number to Search :");
    scanf("%d", &key);

    int res = binarySearch(arr, size, key);

    if (res != -1)
    {
        printf("Number found at index %d", res);
    }
    else
    {
        printf("Number Not Found :) ");
    }

    return 0;
}