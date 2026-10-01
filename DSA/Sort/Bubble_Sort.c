#include <stdio.h>

int main()
{

    int arr[] = {5, 3, 8, 1, 2};
    // int n = 5;
    int n = sizeof(arr) / sizeof(arr[0]); // arr size

    int i, j, temp;

    printf("Before Sort \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Bubble Sort

    for (i = 0; i < n - 1; i++) // 2 ele   i -> n - 1  5 - 1  -> 4     j -> 5
    {
        for (j = 0; j < n - i - 1; j++)
        {
            // check L R

            if (arr[j] > arr[j + 1])
            {
                // swap
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n After Sort \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}