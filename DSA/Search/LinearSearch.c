#include <stdio.h>

int main()
{

    int arr[] = {10, 25, 20, 30, 45, 40};
    int size = 6;
    int key;
    int found = 0;

    printf("Enter the Number to Search :");
    scanf("%d", &key);

    // search
    for (int i = 0; i < size; i++)
    {
        // comper
        if (arr[i] == key)
        {
            printf("\nNumber Found at Index %d", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nNumber Not Found :)");
    }
}