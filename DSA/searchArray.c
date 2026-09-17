#include <stdio.h>

int main()
{

    int arr[100], i, found = 0, n, search;

    printf("Enter the Array Size :");
    scanf("%d", &n);

    printf("\nEnter the Elements of Array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("\nEnter the Number to Search in array :");
    scanf("%d", &search);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("%d Element Found at Index %d", search, i);
            found = 1; 
            break;
        }
    }

    if (found == 0)
    {
        printf("Element Not Found !!!!");
    }
}