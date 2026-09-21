#include <stdio.h>

void sort(int arr[], int n)
{
    int i, j, temp, choice;

    printf("\n1. Ascending");
    printf("\n2. Descending");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((choice == 1 && arr[i] > arr[j]) ||
                (choice == 2 && arr[i] < arr[j]))
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nArray sorted successfully.\n");

    printf("Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void update(int arr[], int n)
{
    int pos, value, i;

    printf("\nEnter position to update: ");
    scanf("%d", &pos);

    if (pos >= 0 && pos < n)
    {
        printf("Enter new value: ");
        scanf("%d", &value);

        arr[pos] = value;

        printf("\nArray updated successfully.\n");

        printf("Array: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid position.\n");
    }
}

void display(int arr[], int n)
{
    int i;

    printf("\nCurrent Array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int deleteElement(int arr[], int n)
{
    int pos, i;

    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    if (pos >= 0 && pos < n)
    {
        for (i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("\nElement deleted successfully.\n");

        printf("Array: ");
        for (i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid position.\n");
    }

    return n;
}

void search(int arr[], int n)
{
    int value, i, found = 0;

    printf("\nEnter element to search: ");
    scanf("%d", &value);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            printf("\nElement %d found at position %d.\n", value, i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nElement not found.\n");
    }

    printf("Array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[100], n, i, choice;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    do
    {
        printf("\n===== ARRAY MENU =====\n");
        printf("1. Sort\n");
        printf("2. Update\n");
        printf("3. Display\n");
        printf("4. Delete\n");
        printf("5. Search\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                sort(arr, n);
                break;

            case 2:
                update(arr, n);
                break;

            case 3:
                display(arr, n);
                break;

            case 4:
                n = deleteElement(arr, n);
                break;

            case 5:
                search(arr, n);
                break;

            case 6:
                printf("\nProgram Ended.\n");
                break;

            default:
                printf("\nInvalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}